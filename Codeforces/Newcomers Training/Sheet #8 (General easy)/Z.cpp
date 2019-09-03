#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    //freopen("input.txt","r",stdin);
    int x,y,z;
    cin>>x>>y>>z;
    cout<< max( max(x,y) ,z) - min(x, min(y,z)) ;
    return 0;
}
