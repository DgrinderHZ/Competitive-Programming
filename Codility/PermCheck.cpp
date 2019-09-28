// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<long long > exist(100009, 0);
    for(long long a: A) exist[a] = 1;
    
    for(int i = 1; i <= A.size();  i++) if(exist[i] == 0) return 0;
    
    return 1;
}
