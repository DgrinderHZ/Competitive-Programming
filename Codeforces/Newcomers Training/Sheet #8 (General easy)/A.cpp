#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    //freopen("input.txt","r",stdin);
    int a, r, c;
    for(int i = 0 ; i < 5; i++)
       for(int j = 0; j < 5 ; j++){
          cin>>a;
          if(a){
                  r = i+1;
                  c = j+1;
          }
    }
    cout <<  abs(3-r) + abs(3-c) << endl;
 
    return 0;
}
