#include <bits/stdc++.h>
 
#define rep(i,a,b) for (int i = a; i < b; i++)
 
using namespace std;
 
typedef long long ll;
 
int main()
{
   int n,m;
   cin >> n;
   int a[n];
   rep(i,0,n){
       cin >> a[i];
   }
   rep(i,0,n){
        int c=0;
        rep(j,0,n){
            if(a[i]>=a[j]){
                c++;
            }
            if(c==n) {
                m=a[i];
                break;
            }
        }
   }
   cout << m;
}