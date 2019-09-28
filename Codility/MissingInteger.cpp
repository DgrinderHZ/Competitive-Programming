// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> f(100009, 0);
    unsigned int i;
    for(i = 0; i < A.size(); i++) if(A[i] > 0) f[A[i]]++;
    
    for(i=1; i <= A.size(); i++) if(f[i] == 0) return i;
    
    return i;
}
