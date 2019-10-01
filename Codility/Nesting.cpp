// you can use includes, for example:
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S){
    // write your code in C++14 (g++ 6.2.0)
    stack<char> open, close;
    if(S.length() == 0 ) return 1;
    if(S[0] == ')' || S[S.length()-1] == '(') return 0;
    for(char c: S) open.push(c);
    
    while(!open.empty()){
        
        char c = open.top();
        if(c == ')') close.push(')');
        else{
            if(!close.empty()) close.pop();
            else return 0;
        }
        
        open.pop();
        
    }
    if(!close.empty()) return 0;
    return 1;
}
