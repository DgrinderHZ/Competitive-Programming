// https://codeforces.com/contest/35/problem/D

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
    int c;
    int all_c; /// tons after n days
};


int dp[100+9][10000+9];
vector<item> a(2000+9);
int sol(int i, int k, int n){
    if(i == n) return 0;
    if(dp[i][k] != -1) return dp[i][k];
    int ans = dp[i][k] = sol(i+1, k, n);
    if(k >= a[i].all_c)
        return dp[i][k] = max(ans, 1 + sol(i+1, k-a[i].all_c, n));
    return ans;
}


int main ()
{
  //#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  //#endif // ONLINE_JUDGE

  cin.tie(0);
  cin.sync_with_stdio(0);

  int x, n;
  cin >> n >> x;
  memset(dp, -1, sizeof(dp));

  loop(n){
    cin >> a[i].c;
    a[i].all_c = a[i].c * (n-i);
  }

  cout << sol(0, x, n);

  return 0;
}
