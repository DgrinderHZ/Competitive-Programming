#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define F first
#define S second
#define loop(n) for(int i = 0; i < n; i++)
#define loopi(i, a, n) for(int i = a; i < n; i++)


typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii > vpii;
typedef pair<double, double> pdd;
typedef vector<pdd > vpdd;

int inf = 100000008;

#define MAXNODES 150009

struct DSU
{
    int parent[MAXNODES];
    int GroupSize[MAXNODES];

    DSU()
    {
        for(int i = 0; i < MAXNODES; i++)
        {
            parent[i] = i;
            GroupSize[i] = 1;
        }
    }

    int FindLeader(int i)
    {
        if(parent[i] == i)  return i;

        return parent[i] = FindLeader(parent[i]);
    }

    bool SameGroup(int x, int y)
    {
        int leader1 = FindLeader(x);
        int leader2 = FindLeader(y);

        return leader1 == leader2;
    }


    void MergeGroups(int x, int y)
    {
        int leader1 = FindLeader(x);
        int leader2 = FindLeader(y);

        if(leader1 == leader2)  return;

        if(GroupSize[leader1] > GroupSize[leader2])
        {
            parent[leader2] =  leader1;
            GroupSize[leader1] += GroupSize[leader2];
        }

        else
        {
            parent[leader1] =  leader2;
            GroupSize[leader2] += GroupSize[leader1];
        }
    }

    int GetSize(int x)
    {
        int leader = FindLeader(x);
        return GroupSize[leader];
    }
};

int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE

  cin.tie(0);
  cin.sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  DSU d;
  vector<int> friends(n+1); /// must be == component.size()-1

  while(m--) {
    int a, b;
    cin >> a >> b;

    friends[a]++;
    friends[b]++;

    d.MergeGroups(a, b);
  }

  for(int i = 1; i <= n; ++i) {
    if(friends[i] != d.GetSize(i) - 1) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";
  return 0;
}


