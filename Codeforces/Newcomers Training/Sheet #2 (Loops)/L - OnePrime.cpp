#include <iostream>
 
using namespace std;
 
int main()
{
    int n, b=0;
    cin>>n;
    for(int i=2; i<n;i++)
        if(n%i==0){
            b++;
            if(b>0){
                cout<<"NO";
                break;
            }
        }
    if(b==0) cout<<"YES";
}