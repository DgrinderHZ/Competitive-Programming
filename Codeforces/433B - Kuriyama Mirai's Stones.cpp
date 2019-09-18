//http://codeforces.com/problemset/problem/433/B
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
#define loop(i,a,b) for (int i = a; i < b; i++)
#define prec setprecision(n)
#define endl '\n'

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef unsigned long long ull;
typedef long double ld;


int main ()
{
  #ifndef ONLINE_JUDGE
  	freopen ("input.txt","r",stdin);
  	//freopen ("output.txt","w",stdout);
  #endif
  

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll n, m, l, r, t;
    vll arr(100009), sorted(1, 0);
    
    cin>>n;
    loop(i, 1, n+1){
    	cin>> arr[i];
    	sorted.pb(arr[i]);
    	
    	arr[i] += arr[i-1];
	}
	
	sort(all(sorted));
    loop(i, 1, n+1) sorted[i] += sorted[i-1];
    
   
    
    cin>>m;
    ll sum;
    while(m--){
      cin>>t>>l>>r;
      sum = 0;
      if(t==1){
        sum = arr[r]-arr[l-1];
      }else{
        sum = sorted[r]-sorted[l-1];
      }
      cout<<sum<<endl;
    }

    

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
