#include <stdio.h>
 int main() {

     int a,b,c,sum1,sum,f;
     a = 0;
    scanf("%d",&a); // a => 26
int i = 1;
 b =a/10;
 c = a%10;
b =(b+c)%10;
f = 10*c + b;

while(a!=f){
b = f/10;
c = f%10; //c= 8
  b= (b+c)%10;//4
f= 10*c+b;

i++;
}
printf("%d",i);
    
}
