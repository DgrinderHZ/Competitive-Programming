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



int main ()
{
  int n, np = 0;
  cin >> n;
  vi prime(n+1, 1);
  for(ll i = 2; i*i<= n; i++){
  	if(prime[i] == 1){
  		int j = i+i;
  		while(j<=n){
  			prime[j] = 0;
  			j += i;
		  }
	  }
  }
  
  cout << count(all(prime), 1)-2; // minus (0 and 1)
  return 0;
}





