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



#define MAXNODES 52

struct DSU
{
    int parent[MAXNODES];
    int GroupSize[MAXNODES];
    int groups;

    DSU(int n)
    {
        for(int i = 0; i < n+1; i++)
        {
            parent[i] = i;
            GroupSize[i] = 1;
        }
        groups = n;
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
            groups--;
        }

        else
        {
            parent[leader1] =  leader2;
            GroupSize[leader2] += GroupSize[leader1];
            groups--;
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

  DSU d(n);

  while(m--) {
    int a, b;
    cin >> a >> b;

    d.MergeGroups(a, b);
  }

  cout << (ll)pow(2, n-d.groups);
  return 0;
}


