//761B - Dasha and friends :    https://codeforces.com/problemset/problem/761/B

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


int main() {
	 #ifndef ONLINE_JUDGE
	  	freopen ("input.txt","r",stdin);
	  	//freopen ("output.txt","w",stdout);
	  #endif
	  
	  int n, l;
	  cin>>n >>l;
	  
	  int a[51], b[51], aDist[51], bDist[51];
	  
	  loop(i, 0, n) cin>>a[i];
	  loop(i, 0, n) cin>>b[i];
	  
	  // get the distances between barriers
	  loop(i, 1, n) {
	  	aDist[i] = a[i]-a[i-1];
	  	bDist[i] = b[i]-b[i-1];
	  }
	  
	  aDist[0] = (l-a[n-1])+a[0];
	  bDist[0] = (l-b[n-1])+b[0];
	  
	  // check rotations
	  loop(k, 0, n){
	  	bool ans = true;
	  	loop(i, 0, n){
	  		if(aDist[(i+k)%n] != bDist[i]){
	  			ans = false;
	  			break;
			  }
		  }
		if(ans){
			cout<<"YES"; return 0;
		}
	  }
	  
  
   cout<<"NO"; return 0;
}
