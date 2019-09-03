#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    string ans = "NO";
       for(int j = 2; j < n; j +=2){
           for(int i = 2; i< n; i += 2){
                  if (i+j == n){
                    ans = "YES";
                    break;
                  }
           }
        }
      cout<<ans;
    return 0;
}
