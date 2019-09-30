// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    if(n == 0) return A;
    
    K = K % n;
    for(int i = 0; i < K; i++){
        int t = A[n-1];
        for(int j = n-1; j > 0; j--) A[j] = A[j-1];
        A[0] = t;
    }
    return A;
}
