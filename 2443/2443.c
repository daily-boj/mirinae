#include <stdio.h>
int main(){
int starLine = 0;
int repeatNum = 0;
int repeatStar = 0;
int repeatN = 0;
int k = 1;
int i = 0;
scanf("%d",&starLine);
repeatStar = starLine*2-1;
while(repeatNum<starLine) {
while(repeatN<i) {
printf(" ");
repeatN++;
}
repeatN = 0;
i++;
while(repeatN<repeatStar) {
printf("*");
repeatN++;
}
repeatStar-=2;
printf("\n");
repeatN = 0;

repeatNum++;
}
}
