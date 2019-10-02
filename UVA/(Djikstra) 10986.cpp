#include <vector>
#include <iostream>
#include <set>
using namespace std;

#define ll long long
int inf = 100000008;

int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE

  int N, n, m, s, t, c=1;
  cin >> N;
  while(N--){
      cin >> n >> m >> s >> t;
      vector< vector<pair<int, int> > > edges(n+2);
      while(m--){
        int u, v, w;
        cin >> u >> v >> w;
        edges[u].push_back({v, w});
        edges[v].push_back({u, w});
      }

      ///Dijkstra
        vector<int> cost(n+9, -1);
        set<pair<int, int> > dist;
        dist.insert({0, s}); ///<totalCost, node> sorted automaticaly by first

        while(!dist.empty())
        {
            pair<int, int> p = *(dist.begin()); 
            dist.erase(p);
            int node = p.second, nodeCost = p.first;

            if(cost[node] != -1)    continue; /// visited

            cost[node] = nodeCost;
            for(pair<int, int> edge: edges[node])  if(cost[edge.first] == -1)
            {
                dist.insert({nodeCost+edge.second, edge.first});
            }
        }

        printf("Case #%d: ", c++ );
        if(cost[t] == -1)    printf("unreachable\n");
        else                    printf("%d\n", cost[t]);
  }

  return 0;
}


