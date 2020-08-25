#include <stdio.h>
int num[10000] = {0, };
int main() {
    int selfN = 1;
    int t = 0;
    int selfM =0;
    selfM = selfN;
    for(int i = 1 ; i<=10000; i++) {
        num[i] = i;
    }
    while(selfN<=10000) {
        selfM = selfM + selfM/1000 +(selfM%1000)/100 + ((selfM%1000)%100)/10  + selfM%10;
    while (t<10000) {
        if(num[t] == selfM ) {
            num[t] = 0;
            break;
        } 
            t++;       
    }
    selfN++;
    selfM = selfN;
    t =0;
    }
    for(int k = 0;k<10000;k++) {
    if(num[k] ==0) {
    continue;
    } else {
    printf("%d\n",num[k]);
    }
    }
}
