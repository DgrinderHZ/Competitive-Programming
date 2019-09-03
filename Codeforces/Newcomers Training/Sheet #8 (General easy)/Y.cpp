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
 
//Short code
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pair<int,int> > vii;
typedef unsigned long long ull;
typedef long double ld;
 
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
 
 
int main ()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);
 
  /* Code here */
  int n,m;
  bool left = false, right = true; 
  cin>> n >> m;
   loop(i, 0, n){
   	   
  	   loop(j, 0, m){
  	     if( (i+1) % 2 == 0 && (j > 0 && j<m-1) ){
  	     	cout<<".";
		   }
  	     else {
  	     	if(j==0 && (i+1) % 2 == 0 && (i+1) % 4 != 0) cout<<".";
  	     	else if(j==m-1 && (i+1) % 4 == 0 ) cout<<".";
  	     	//else if(j==1 && left) cout<<".";
  	     	else cout<<"#";
           }
       }
      cout<<endl;
      if( right ) {
      	left = true;
      	right = false;
	  }
    
   }
   //cout << c;
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
