// you can use includes, for example:
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int N;
vector<int> a(1000002);
int k;

bool check(int mx){
    int _max = 0;
    int i = 0;
    int blocks = 1;
    
    while(i < N){
        if(a[i] > mx) return false;
        
        if(_max + a[i] <= mx){
            _max += a[i];
        }else{
            _max = a[i];
            blocks++;
            if(blocks > k) return false;
        }
        i++;
    }
    
    return true;
    
}
int solution(int K, int M, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    N = A.size();
    for(int i= 0; i < N; i++) a[i] = A[i];
    k = K;
    int l = 0, r = (int)1e9;
    int ans = -1;
    while(l <= r){
        int mid = (l+r)/2; 

        if(check(mid)) {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    return ans;
}
