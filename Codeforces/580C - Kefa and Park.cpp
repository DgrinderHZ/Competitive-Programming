// https://codeforces.com/problemset/problem/580/C

#include <bits/stdc++.h>
using namespace std;

//Macros
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define sortaa(a,n) sort(a,a+n)
#define sortad(a,n) sort(a,a+n),reverse(a,a+n)
#define sfi1(v) scanf("%d",&v)
#define sfi2(v1,v2) scanf("%d %d",&v1,&v2)
#define sfi3(v1,v2,v3) scanf("%d %d %d",&v1,&v2,&v3)
#define sfll1(v) scanf("%I64d",&v);
#define sfll2(v1,v2) scanf("%I64d %I64d",&v1,&v2)
#define sfll3(v1,v2,v3) scanf("%I64d %I64d %I64d",&v1,&v2,&v3)
#define sfstr(v) scanf("%s", v);
#define sz(v) (int)v.size()
#define ndl puts("")
#define SS stringstream
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for (int i = a; i < (b); i++)
#define prec setprecision(n)
#define endl '\n'

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef unsigned long long ull;
typedef long double ld;

int INF = numeric_limits<int>::max() - 9;

vi coins;
vi ready(10000), value(10000);


int solve(int x){
	
  if(x < 0) return INF;
  if(x == 0) return 0;
  if(ready[x]) return value[x];
  
  int best = INF;
  for(int c: coins){
    best = min(best, solve(x-c)+1);
  }
  ready[x] = 1;
  value[x] = best;
  
  return best;
}




int main ()
{
  #ifndef ONLINE_JUDGE
  	freopen ("input.txt","r",stdin);
  	//freopen ("output.txt","w",stdout);
  #endif
  
  int m, n, s, u, v;
  
  	cin >> n >> m;
  	vi cats(n+1);
  	for(int i=1; i<=n ; i++){
  		cin >> cats[i]; 
  		
	  }
	  
  	vector<vi > adj(n+1);
  	for(int i=1; i<=n-1 ; i++){
  		cin >> u >> v; 
  		
  		adj[u].pb(v);
  		adj[v].pb(u);
	  }
	  
	s = 1;
	// BFS
	vi dist(n+1, -1);
	dist[s] = cats[s];
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(int nd: adj[node]) if(dist[nd] == -1){
			q.push(nd);
			if(cats[node])
				dist[nd] = dist[node]+cats[nd];
		}
	}
	
	// print
	int ans = 0;
	for(int i = 2; i < dist.size(); i++){
		if(dist[i] <= m && adj[i].size()==1)
			ans++;
	}
	
	cout<< ans;

  return 0;
}
