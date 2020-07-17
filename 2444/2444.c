#include <stdio.h>

int main() {
int starLine = 0;
int N = 0;
int repeatStar= 0;
int repeatLine = 1;
int starNum = 0;
scanf("%d",&starLine);
starNum = starLine *2-1;
int blankNum = starLine-1;

while(N<starNum) {
if(N<starLine) {
while(repeatStar<blankNum) {
printf(" ");
repeatStar++;
}
repeatStar = 0;
while(repeatStar<repeatLine) {
printf("*");
repeatStar++;
}

blankNum-=1;

repeatLine+=2;
} else if(N == starLine){

repeatLine-=4;
blankNum = 1;
while(repeatStar<blankNum) {
printf(" ");
repeatStar++;
}
repeatStar= 0;
while(repeatStar<repeatLine) {
printf("*");
repeatStar++;
}
} else if(N>starLine){
blankNum++;
while(repeatStar<blankNum) {
printf(" ");
repeatStar++;
}

repeatStar=0;
repeatLine-=2;
while(repeatStar<repeatLine) {
printf("*");
repeatStar++;
}
}

repeatStar = 0;
printf("\n");
N++;
}
}
