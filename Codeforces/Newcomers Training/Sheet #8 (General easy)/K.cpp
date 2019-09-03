#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    //freopen("input.txt","r",stdin);
    int n,h; cin>>n>>h;
    int a,cpt=0;
    //string ans = "NO";
       for(int j = 0; j < n ; j++){
           cin>>a;
           if(a > h) cpt += 2;
           else
                    cpt++;
        }
 
     cout<<cpt;
    return 0;
}
