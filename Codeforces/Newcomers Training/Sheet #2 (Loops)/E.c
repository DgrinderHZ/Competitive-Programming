#include<stdio.h>

int main(){
    int n;
    
    while(1){
        scanf("%d", &n);
        if(n == 1999){
            printf("Correct");
            break;
        }else
            printf("Wrong\n");
    }
    
    
    return 0;
}
