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



#define MAXNODES 10002

struct DSU
{
    int fparent[MAXNODES], eparent[MAXNODES];
    int fGroupSize[MAXNODES], eGroupSize[MAXNODES];

    DSU(int n)
    {
        for(int i = 0; i < n+1; i++)
        {
            fparent[i] = i;
            eparent[i] = i;
            fGroupSize[i] = 1;
            fGroupSize[i] = 0;
        }
    }

    int fFindLeader(int i)
    {
        if(fparent[i] == i)  return i;

        return fparent[i] = fFindLeader(fparent[i]);
    }

    int eFindLeader(int i)
    {
        if(eparent[i] == i)  return i;

        return eparent[i] = eFindLeader(eparent[i]);
    }

    bool FriendsGroup(int x, int y)
    {
        int leader1 = fFindLeader(x);
        int leader2 = fFindLeader(y);

        return leader1 == leader2;
    }

    bool EnemiesGroup(int x, int y)
    {
        int leader1 = eFindLeader(x);
        int leader2 = eFindLeader(y);

        return leader1 == leader2;
    }

    void MergeFriends(int x, int y)
    {
        int leader1 = fFindLeader(x);
        int leader2 = fFindLeader(y);

        if(leader1 == leader2)  return;

        if(fGroupSize[leader1] > fGroupSize[leader2])
        {
            fparent[leader2] =  leader1;
            fGroupSize[leader1] += fGroupSize[leader2];

        }

        else
        {
            fparent[leader1] =  leader2;
            fGroupSize[leader2] += fGroupSize[leader1];

        }
    }

    void MergeEnemies(int x, int y)
    {
        int leader1 = eFindLeader(x);
        int leader2 = eFindLeader(y);

        if(leader1 == leader2)  return;

        if(eGroupSize[leader1] > eGroupSize[leader2])
        {
            eparent[leader2] =  leader1;
            eGroupSize[leader1] += eGroupSize[leader2];

        }

        else
        {
            eparent[leader1] =  leader2;
            eGroupSize[leader2] += eGroupSize[leader1];

        }
    }

    int GetSize(int x)
    {
        int leader = fFindLeader(x);
        return fGroupSize[leader];
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
  cin >> n; // >> m;
  m = n;
  DSU d(n);
  int c, a, b;
  while(cin >> c >> a >> b , c!=0) {

    if(c == 1){
        if(d.EnemiesGroup(a, b) == false){
            int f = 1;
            for(int i = 0; i <= n; i++) if(i!=a && i!=b) {
                if(d.EnemiesGroup(a, i) && d.FriendsGroup(b, i)){
                    cout << "-1\n"; f = 0; break;
                }
            }
            if(f == 1) d.MergeFriends(a, b);
        }
        else
            cout << "-1\n";
    }
    if(c == 2){
       if(d.FriendsGroup(a, b) == false){
            int e = 1;
            for(int i = 0; i <= n; i++)if(i!=a && i!=b){
                if(d.EnemiesGroup(a, i) && d.FriendsGroup(b, i)){
                    cout << "-1\n"; e = 1; break;
                }
            }
            if(e == 1) d.MergeEnemies(a, b);
       }
        else
            cout << "-1\n";
    }
    if(c == 3){

        if(d.FriendsGroup(a, b) == true){
            cout << "1\n";
        }else{
            int f = 0;
            for(int i = 0; i <= n; i++)if(i!=a && i!=b){
                if(d.EnemiesGroup(a, i) && d.EnemiesGroup(b, i)){
                     f = 1; break;
                }
            }
            if(f == 1) cout << "1\n";
            else cout << "0\n";
        }

    }
    if(c == 4){
        if(d.EnemiesGroup(a, b) == true){
            cout << "1\n";
        }else{
            int e = 0;
            for(int i = 0; i <= n; i++)if(i!=a && i!=b){
                if(d.FriendsGroup(a, i) && d.EnemiesGroup(b, i)){
                     e = 1; break;
                }
            }
            if(e == 1) cout << "1\n";
            else cout << "0\n";
        }
    }
  }

  return 0;
}


