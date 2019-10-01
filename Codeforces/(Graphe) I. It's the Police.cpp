#include <vector>
#include <iostream>
#include <map>
using namespace std;


int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE

  int n, m;
  cin >> n >> m;
  vector<int> edges[n+1];

  while(m--){
    int u, v;
    cin >> u >> v;
    edges[u].push_back(v);
    edges[v].push_back(u);
  }

  /// find minimal tree  (each vertex with his children)
  int mn = (int)2*1e5, index = -1;

  for(int i=1; i<=n ; i++) if((int)edges[i].size() < mn){
    index = i;
    mn = (int)edges[i].size();
  }

  /// put 0 on index and its neighbours
  vector<int> ans(n+1, 1);
  ans[index] = 0;
  for(int i: edges[index]) ans[i] = 0;
  for(int i=1; i<=n ; i++) cout << ans[i] << " ";

  return 0;
}


