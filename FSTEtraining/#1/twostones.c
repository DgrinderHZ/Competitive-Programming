#include <stdio.h>


int main ()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  int n;
  scanf("%d", &n);
 
    if( (n % 2 == 0))
        printf("Bob\n");
    else
        printf("Alice\n");
        
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}





