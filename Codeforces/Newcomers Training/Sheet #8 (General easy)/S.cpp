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
typedef unsigned long long ull;
typedef long double ld;
 
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
 
 
int main ()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);
 
  /* Code here */
  vi v;
  
  loop(i, 0, 4){
       int a; 
       cin>>a;
       v.pb(a);
   }
   cin.ignore();
  
  string s;
  getline(cin, s);
  
  int c = 0;
  loop(i, 0, s.size()){
  	   int j = (int)s[i]-48;
  	   //cout<< j <<endl;
       c += v[j-1];
   }
   cout << c;
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
