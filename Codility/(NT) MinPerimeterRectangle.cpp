int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int mn = 2000900000, i;
    for( i = 1; i*i < N; i++){
        if(N%i == 0){
            int b = N/i;
            mn = min(mn, 2*(i+b));
        }
    }
    if(i*i == N) mn = min(mn, 2*(i+i));
    return mn;
}
