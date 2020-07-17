#include<stdio.h>

int main()
{
    int T;
    int mod = 0;
    int i = 0;
    int nineJinsu[6] = {0, };
    scanf("%d",&T);
    
    while(T/9 != 0) {
        mod = T % 9;
        T = T/9;
        nineJinsu[i] = mod;
        i++;
    }
   
       if(T/9 == 0) {
        mod = T%9;
        nineJinsu[i] = mod;
    }
    
    while(i>=0) {
    printf("%d",nineJinsu[i]);
    i--;
    }
}
