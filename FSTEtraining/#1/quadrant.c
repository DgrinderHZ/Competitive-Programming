//https://open.kattis.com/contests/rnmdj2/problems/quadrant
#include <stdio.h>


int main ()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);


  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);
  if(x>0){
    if(y>0){
        printf("1");
      }else{
        printf("4");
      }
  }else{
    if(y>0){
        printf("2");
      }else{
        printf("3");
      }
  }
   
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
