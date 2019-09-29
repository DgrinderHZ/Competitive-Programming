int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    vector<int> pre(n, 0);
    pre[0] = A[0];

    for(int i=1; i < n; i++){
        pre[i] = A[i] + pre[i-1];

    }

    int mn = 1000000000;
    for(int i=0; i < n; i++){
        int cur = abs(pre.back() - pre[i] - pre[i]);
        if(cur < mn) mn = cur;
    }

    return mn;

}
