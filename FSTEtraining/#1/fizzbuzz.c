#include <stdio.h>


int main ()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  int n, x, y;
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &n);
  int i;
  for( i=1; i<=n; i++){
    if( i%(y) == 0 && i%x == 0) printf("FizzBuzz\n");
    else if(i%x == 0) printf("Fizz\n");
        else if(i%y == 0) printf("Buzz\n");
             else printf("%d\n", i);
  }
 
   
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}