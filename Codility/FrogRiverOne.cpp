
int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    vector<int> pos(n+1, 0);// check if already have a leaf
    int checked = 0, i = 0, ans = -1;
    
    while(checked < X && i < n){
        if(pos[A[i]] == 0){
            pos[A[i]] = 1;
            checked++;
            ans = i;
        }
        i++;
    }
    
    if(checked == X) return ans;
    return -1;
    
    
}
