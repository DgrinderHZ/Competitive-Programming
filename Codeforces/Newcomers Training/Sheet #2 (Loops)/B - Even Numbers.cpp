#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N,j=-1 ;
    cin >> N ;
    for(int i=1;i<=N;i++){
        if(i%2==0){
            cout << i << endl ;
            j++;
        }
        
    }
    if(j==-1) cout << j ;
}