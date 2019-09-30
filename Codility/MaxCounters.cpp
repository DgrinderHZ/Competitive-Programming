// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> counter(N, 0);
    for(int i: A){
        if(i >= 1 && i <= N) counter[i-1]++;
        else if(i == N+1){
            int mx = *max_element(counter.begin(), counter.end());
            counter = vector<int>(N, mx);
        }
    }
    return counter;
}
