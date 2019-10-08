#include <vector>
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int sc, sa;
vector<int> a(30003);
vector<int> b(30003);
vector<int> c(30003);

bool check(int mx){
    vector<int> nailed(sa, 0);
    for(int i = 0 ; i < mx; i++){
        for(int k = 0; k < sa ; k++)
            if(a[k] <= c[i] && c[i] <= b[k]) nailed[k] = 1;
    }
    
    int cnt = count(nailed.begin(), nailed.end(), 0);
    
    if(cnt == 0) return true;
    return false;
}



int solution(vector<int> &A, vector<int> &B, vector<int> &C) {
    // write your code in C++14 (g++ 6.2.0)
    sa = A.size();
    sc = C.size();
    for(int i= 0; i < sa; i++){
        a[i] = A[i];
        b[i] = B[i];
    }
    
    for(int i= 0; i < sc; i++){
        c[i] = C[i];
    }
    
    int l = 0, r = (int)1e3*3;
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
// you can use includes, for example:
