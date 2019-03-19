#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    // Complete the code.
    int n, temp = 0, cpt = 0, j = 0;
    cin>>n;
    vector<int> arr;
    for(int i =0; i < n; i++){
        int a; cin>>a;
        if(i == j && a)
             j++;
        if(a){
          temp++;
        } 
        else{
            if ( temp > cpt) cpt = temp;
            temp = 0;
        }

        if (i == n - 1)
          temp += j;
        if (temp > cpt)
          cpt = temp;
    }
    cout<<cpt;
    return 0;
}

