#include <bits/stdc++.h>
using namespace std;

//Macros
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define sortaa(a,n) sort(a,a+n)
#define sortad(a,n) sort(a,a+n),reverse(a,a+n)

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


ll extGCD(ll a, ll b, ll &x, ll &y){
    if(b == 0){
        x = 1, y = 0;
        return a;
    }
    ll g = extGCD(b, a%b, y, x);
    y -= (a / b) * x;
    return g;
}

int main ()
{
  ll a, b;
  while(cin >> a >> b){
  	ll x,y, d;
	  d = extGCD(a,b,x,y);
	cout << x << " " << y << " " << d <<endl;
  }
  return 0;
}





