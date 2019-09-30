// you can use includes, for example:
#include <map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    map<char, int> impact;
    impact['A'] = 1;
    impact['C'] = 2;
    impact['G'] = 3;
    impact['T'] = 4;
    int m = P.size();
    vector<int> ans;
    for(int i = 0; i < m; i++) {
        if(P[i] == Q[i]) ans.push_back(impact[S[Q[i]]]);
        else{
            int mn = 5;
            for(int j = P[i]; j <= Q[i] ; j++) mn = min(mn, impact[S[j]]);
             ans.push_back(mn);
        }
    }
    return ans;
}
