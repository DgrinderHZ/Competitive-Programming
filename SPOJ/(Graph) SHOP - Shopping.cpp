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

int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE

  int w, h;
  while(cin >> w >> h, (h != 0 && w != 0)){
    char s[h][w];
    int i = 0;
    while(i < h){
        cin >> s[i];  i++;
    }
    /// dijkstra
    map<pii, int> cost;
    loopi(x, 0, h) loopi(y, 0, w) cost[{x, y}] = -1;
    set<pair<int, pii> > dist;

    pii src, dest;
    loopi(x, 0, h){
        loopi(y, 0, w){

            if(s[x][y] == 'S') src = {x, y};
            if(s[x][y] == 'D') dest = {x, y};
        }
    }

    dist.insert({0, src});

    while(!dist.empty())
        {
            pair<int, pii> p = *(dist.begin());
            dist.erase(p);
            pii node = p.second;
            int nodeCost = p.first;

            if(cost[node] != -1)    continue; /// visited (we've found the min cost)

            cost[node] = nodeCost;

            int i = node.first;
            int j = node.second;
            if(i < 0 || i >= h || j < 0 || j >= w)  continue;
            if(s[i][j] == 'X')   continue;

            pii successors[] = {{i+1, j}, {i-1, j}, {i, j+1}, {i, j-1}};

            for(pii neighbor: successors)  if(cost[neighbor] == -1){
                if(neighbor == dest)
                    dist.insert({nodeCost, neighbor});
                else
                    dist.insert({nodeCost+(s[neighbor.F][neighbor.S]-'0'), neighbor});

            }

        }
            cout << cost[dest] << endl;
    string ignore;
    getline(cin, ignore);
  }
  return 0;
}


