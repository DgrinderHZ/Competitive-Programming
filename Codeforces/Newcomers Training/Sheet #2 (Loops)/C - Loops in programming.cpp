#include <iostream>
 
using namespace std;
 
int main()
{
    long long N,S=0;
    cin >> N ;
    for(int i=0;i<=N;i++){
        S=S+i ;
    }
    cout << S ;
}