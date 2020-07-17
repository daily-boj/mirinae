#include <stdio.h>
#include <string.h>

int main() {
char inputChar[21];
int repeatInt =0;
int Num = 0;
int repeatCharNum = 0;
int repeatNum;
int charNum= 0;
int i =0;
scanf("%d",&repeatInt);
while(Num<repeatInt) {
scanf("%d %s",&repeatNum,inputChar);
charNum = strlen(inputChar);
while(repeatCharNum<charNum) {
while(i<repeatNum) {
printf("%c",inputChar[repeatCharNum]);
i++;
}

i=0;
repeatCharNum++;
}
repeatCharNum=0;
printf("\n");
Num++;
}
}
