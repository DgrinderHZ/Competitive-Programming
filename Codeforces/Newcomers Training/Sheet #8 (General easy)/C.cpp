#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    //freopen("input.txt","r",stdin);
    int a; cin>>a;
    int v[] = { 4, 7, 47, 74, 44, 77, 444, 447, 474, 477, 744, 747, 777,774 };
    string ans = "NO";
       for(int j = 0; j < 14 ; j++){
          if( a % v[j] == 0) ans = "YES";
        }
 
     cout<<ans;
    return 0;
}
