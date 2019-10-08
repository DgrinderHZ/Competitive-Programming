#include <vector>
#include <iostream>
#include <set>
#include <string.h>
#include <algorithm>

using namespace std;

#define ll long long
#define F first
#define S second
#define loop(n) for(ll i = 0; i < n; i++)
#define loopi(i, a, n) for(int i = a; i < n; i++)
#define endl "\n";


typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii > vpii;
typedef pair<double, double> pdd;
typedef vector<pdd > vpdd;

ll BS(vll &a, ll x){
    ll l = 0, r = a.size()-1;
    ll ans = -1;
    while(l <= r){
        ll mid = (l+r)/2;
        if(a[mid] == x) {
            ans = mid;
            r = l-1;
        }
        if(a[mid] < x) l = mid+1;
        else r = mid-1;
    }
    return ans;
}

int main ()
{
  

  cin.tie(0);
  cin.sync_with_stdio(0);
  ll n, q;
   cin >> n >> q;
   vll a(n);
   loop(n){
       cin >> a[i];
   }
   loop(q){
       int x;
       cin >> x;
       cout << BS(a, x) << endl;
   }

  return 0;
}
