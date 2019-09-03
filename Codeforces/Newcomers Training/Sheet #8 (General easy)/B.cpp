#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    //freopen("input.txt","r",stdin);
    int n,a; cin>>n;
    int *v = new int[n];
 
       for(int j = 0; j < n ; j++){
          cin>>a;
          v[a-1] = j+1;
        }
 
      for(int j = 0; j < n ; j++){
          cout<< v[j] <<" ";
        }
    return 0;
}
