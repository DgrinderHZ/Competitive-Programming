// you can use includes, for example:
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S){
    // write your code in C++14 (g++ 6.2.0)
    stack<char> open, close; // ()
    stack<char> closec; // {} curly 
    stack<char> closes; // [] scuare
    
    if(S.length() == 0 ) return 1;
    
    if(S[0] == ')' || S[S.length()-1] == '(') return 0;
    if(S[0] == '}' || S[S.length()-1] == '{') return 0;
    if(S[0] == ']' || S[S.length()-1] == '[') return 0;
    
    for(char c: S) open.push(c);
    char prev = open.top();
    while(!open.empty()){
        
        char c = open.top();
        if(c == ')') close.push(')');
        else if(c == '}') closec.push('}');
        else if(c == ']') closes.push(']');
        else{
            if(c == '(' && prev != '}' && prev != ']' && !close.empty()) close.pop();
            else if(c == '{' && prev != ')' && prev != ']' && !closec.empty()) closec.pop();
            else if(c == '[' && prev != '}' && prev != ')' && !closes.empty()) closes.pop();
            else return 0;
        }
        
        open.pop();
        prev = c;
    }
    if(!close.empty() || !closec.empty() || !closes.empty()) return 0;
    return 1;
}
