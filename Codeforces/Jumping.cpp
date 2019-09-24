// https://codeforces.com/gym/101147/problem/E
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
  //#ifndef ONLINE_JUDGE
  	freopen ("jumping.in","r",stdin);
  	//freopen ("output.txt","w",stdout);
  //#endif
  
  int q, n, s, u, v;
  cin >> q;
  while(q--){
  	cin >> n;
  	vector<vi > adj(n+1);
  	for(int i=1; i<=n ; i++){
  		cin >> s; //d
  		u = i-s;
  		v = i+s;
  		if(u>0) adj[u].pb(i);
  		if(v<=n)adj[v].pb(i);
	  }
	  
	s = n;
	// BFS
	vi dist(n+1, -1);
	dist[s] = 0;
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(int nd: adj[node]) if(dist[nd] == -1){
			q.push(nd);
			dist[nd] = dist[node]+1;
		}
	}
	
	// print
	for(int i = 1; i < dist.size(); i++){
		cout<<dist[i] <<endl;
	}
	
	
  }
  return 0;
}
