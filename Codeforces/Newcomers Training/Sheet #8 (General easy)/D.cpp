#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
   // freopen("input.txt","r",stdin);
    string ans , h="hello";
    getline(cin,ans);
    int i= 0, cpt = 0;
       for(int j = 0; j < ans.size() ; j++){
          if( ans[j] == h[i] ){
                    i++;
                    cpt++;
          }
        }
     if(cpt == 5)
         cout<<"YES";
     else
          cout<<"NO";
    return 0;
}
