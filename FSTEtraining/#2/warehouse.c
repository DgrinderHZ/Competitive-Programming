#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct me{
  char toy[11];
  int qty;
}Product;

int preceed(Product *a, Product *b){
  if(a->qty == b->qty){
  	
  	return strcmp(a->toy, b->toy);
  }
  
  if(a->qty > b->qty) return -1;
  return 1;

}


int main ()
{
  #ifndef ONLINE_JUDGE
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
  #endif
  
    int t, n, N;
    
    scanf("%d", &t);
    while(t--){
    	
      scanf("%d", &n);
      Product ans[100];
      int saved = 0;
      while(n--){
      	char s[11];
      	scanf("%s", s);
      	scanf("%d", &N);
        //printf("%s %d\n", s, N);
        int i, found = 0; 
        for(i = 0; i < saved; i++) 
			if(strcmp(ans[i].toy, s) == 0 ){
				ans[i].qty += N;
				found = 1;
			}
				
		if(found == 0){
				ans[saved].qty = N;
				strcpy(ans[saved].toy, s);
				saved++;
				///printf("%s %d\n", ans[saved].toy, ans[saved].qty);
		}
        
      }

      int i;
      qsort (ans, saved, sizeof(ans[0]), preceed);
      printf("%d\n", saved);
      for(i = 0; i < saved ; i++){
        printf("%s %d\n", ans[i].toy, ans[i].qty);
      }
      
    }
  return 0;
}
