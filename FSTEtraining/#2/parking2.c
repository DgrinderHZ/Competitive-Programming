#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main ()
{
  #ifndef ONLINE_JUDGE
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
  #endif
  
    int t, n;
    
    scanf("%d", &t);
    while(t--){
    	
      scanf("%d", &n);
      int *stors = (int*)malloc(n*sizeof(int));
      int i;
      for(i=0; i<n; i++){
      	scanf("%d", &stors[i]);
	  }
	  
	  qsort(stors, n, sizeof(int), cmp);
	  int ans = 0;
	  for(i=1; i<n; i++){
      	ans += (stors[i] - stors[i-1]);
	  }
	  
	  printf("%d\n", ans*2);
    }
  return 0;
}
