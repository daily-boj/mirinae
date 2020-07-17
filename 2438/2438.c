#include <stdio.h>
int main(){
  int a =0;
  int c ;
  int i;
  scanf("%d",&a);
  for(i=0;i<a; i++) {
   for(c=0; c<=i; c++){
     printf("*");
    }
    c=0;
    printf("\n");
 }
  
}
