#include <stdio.h>

int main () {

int shareOne = 0;
int shareTwo = 0;
int xMod,yMod;
int xPosit;
int yPosit;
int xLen,yLen;
scanf("%d %d",&xPosit,&yPosit);
//xPsit = 8 yPosit = 30;
xPosit= xPosit-1;
yPosit=yPosit-1; 
shareOne = xPosit/4; 
shareTwo = yPosit/4; 

xMod = xPosit%4; 
yMod = yPosit%4; 


if(shareOne>= shareTwo) {
    xLen = shareOne - shareTwo;
    if(xMod>=yMod) {
    yLen = xMod- yMod;
    } else {
    yLen = yMod- xMod;
    }
    printf("%d\n",xLen+yLen); 
} else {
    xLen = shareTwo - shareOne;  
    if(xMod<=yMod) {
    yLen = yMod- xMod;
    } else {
    yLen = xMod - yMod; 
    }
    printf("%d\n",xLen+yLen);

}
}
