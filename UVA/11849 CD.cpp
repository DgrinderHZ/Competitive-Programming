#include <string>
#include <set>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE

  long long n, m, ans, siz;

  while(cin >> n, cin >> m, (n != 0 || m != 0)){
    set<long long> s; ans = 0;
    for(int i = 0; i < n; i++){
        long long a; cin>>a;
        s.insert(a);
    }
    siz = s.size();
    for(int i = 0; i < m; i++){
        long long a; cin>>a;
        s.insert(a);
        if(s.size() == siz) ans++;
        else siz++;
    }
    cout << ans <<endl;
  }

  return 0;
}


