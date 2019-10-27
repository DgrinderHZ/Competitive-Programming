#include <stdio.h>


int main ()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  int n, m;
  scanf("%d", &n);
  int i;
  for(i = 0; i<n; i++){
  	scanf("%d", &m);
  	if(m % 2 == 0) printf("%d is even\n", m);
  	else printf("%d is odd\n", m);
  }
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}





