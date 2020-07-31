#include <stdio.h>

int main() {
char inputChar[100];
int repeatNum = 0;

int sum = 0;
scanf("%d",&repeatNum);
scanf("%s",inputChar);

for(int i = 0;i<repeatNum;i++) {
sum= sum+ (inputChar[i] -'0' );
}
printf("%d\n",sum);
}
