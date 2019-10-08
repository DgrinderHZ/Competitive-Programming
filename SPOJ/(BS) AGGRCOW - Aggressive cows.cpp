#include <vector>
#include <iostream>
#include <set>
#include <map>
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


bool check(vll &pos, ll c, ll dist){

    ll last = 0; c--;
    for(ll t = 1; t < (ll)pos.size() && c > 0 ; t++){
        if(pos[t] >= pos[last]+dist){
            last = t;
            c--;
        }
    }

    if(c > 0) return false;

    return true;
}

ll BS(vll &pos, ll c){
    ll l = 1, r = 1000000002;
    ll ans = -1;
    while(l <= r){
        ll mid = (l+r)/2;
        if(check(pos, c, mid)) {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }


    return ans;
}

int main ()
{
  //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  //#endif // ONLINE_JUDGE

  cin.tie(0);
  cin.sync_with_stdio(0);
  int t;
  cin >> t;
  while(t--){
       ll n, c;
       cin >> n >> c;
       vll pos(n);
       loop(n){
           cin >> pos[i];
       }
       sort(pos.begin(), pos.end());

       cout << BS(pos, c) << endl;
  }

  return 0;
}
