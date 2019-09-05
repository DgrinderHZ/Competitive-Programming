#include <bits/stdc++.h>
using namespace std;
 
//Short code
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
//Macros
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for (int i = a; i < b; i++)
 
// TLE with Python
string to2(ll a){
	if(a == 0)
		return "";
	ll r = a % 2;
	return (to2(a/2) + to_string(r));
}
	
int main ()
{
  ll n, a;
  cin>>n;
  vector<ll> v;
  while(n--){
  	cin>>a;
  	cout<<to2(a)<<endl;
  }
 
  return 0;
}
 
