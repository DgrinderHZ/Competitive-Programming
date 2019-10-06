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




int dp[5000+9][5000+9];
string s;
int sol(int i, int k, int n){
    if(i >= n || k >= n) return 1;
    if(dp[i][k] != 0) return dp[i][k];
    string temp = s.substr(i-1, 2);

    if(atoi(temp.c_str()) <= 26 ){
        return dp[i][k] = sol(i+1, i, n)+sol(i+2, i+1, n);
    }
    else return dp[i][k] = sol(i+1, i, n);
}


int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE

  cin.tie(0);
  cin.sync_with_stdio(0);
  int  n;
  while(cin >> s, s!="0"){
    n = s.size();
    memset(dp, 0, sizeof(dp));
    cout << sol(1, 0, n) <<endl;
  }

  return 0;
}


