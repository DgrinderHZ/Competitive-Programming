#include <vector>
#include <iostream>
#include <set>
#include <string.h>
#include <algorithm>

using namespace std;

#define ll long long
#define F first
#define S second
#define loop(n) for(int i = 0; i < n; i++)
#define loopi(i, a, n) for(int i = a; i < n; i++)


typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii > vpii;
typedef pair<double, double> pdd;
typedef vector<pdd > vpdd;

struct item{
    int vl;
    int sz;
};


int dp[2000+9][2000+9];
vector<item> a(2000+9);
int sol(int i, int k, int n){
    if(i == n) return 0;
    int ans = dp[i][k];
    if(ans != -1) return dp[i][k];
    ans = dp[i][k] = sol(i+1, k, n);
    if(k >= a[i].sz)
        return dp[i][k] = max(ans, a[i].vl + sol(i+1, k-a[i].sz, n));
    return ans;
}


int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE

  cin.tie(0);
  cin.sync_with_stdio(0);
    int s, n;
  cin >> s >> n;
  memset(dp, -1, sizeof(dp));

  loop(n){
    cin >> a[i].sz >> a[i].vl;
  }

  cout << sol(0, s, n);

  return 0;
}


