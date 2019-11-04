#include <stdio.h>


int main ()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  int n;
  int m[20][20];
  while(scanf("%d", &n)){
  	if(n == -1) break;
  	
  	int i, j;
  	for(i = 0; i < n; i++)
  		for(j = 0; j < n; j++)
  			scanf("%d", &m[i][j]);
  			
	int count = 0, k, weak;
	for(i = 0; i < n; i++){
		weak = 1;
		for(j = 0; j < n; j++) if(j != i && m[i][j] == 1){
  			for(k = 0; k < n; k++) if (k != i && k != j && m[i][k] == 1){
  				if(m[j][k] == 1 ){
  					weak = 0;
				  }
			  }
		  }
		if(weak) printf("%d ", i);
	}
	
  	printf("\n");
  		
  }
  
  return 0;
}
