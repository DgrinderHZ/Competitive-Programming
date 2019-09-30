// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    vector<int> onesPref(n, 0);
    onesPref[0] = 0;
    for(int i = 1; i < n ; i++) onesPref[i] = onesPref[i-1] + A[i];
    long long ans = 0;
    for(int i = 0; i < n ; i++){
        if(A[i] == 0){
            ans += (onesPref[n-1] - onesPref[i]);
        }
    }
    return (ans > 1000000000)? -1 : ans;
}
