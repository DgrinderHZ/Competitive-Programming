#include <bits/stdc++.h>
 
#define rep(i,a,b) for(int i = a; i < b; i++)
 
using namespace std;
 
int main()
{
    int n, E=0,O=0,P=0,N=0;
    cin >> n;
    int nb[n];
    rep(i,0,n){
        cin >> nb[i];
        if(nb[i]%2==0) E++;
        else O++;
        if(nb[i]>0) P++;
        else if(nb[i]<0) N++;
    }
        
    
    cout << "Even: " << E <<"\n";
    cout << "Odd: " << O <<"\n";
    cout << "Positive: " << P <<"\n";
    cout << "Negative: " << N <<"\n";
}