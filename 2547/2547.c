#include <stdio.h>

int main() {
    unsigned long long int repeatNum,classMateNum,candyNum;
    unsigned long long int candySumMod = 0;
    unsigned long long int sum = 0;
    unsigned long long i;
    unsigned long long k;
    scanf("%llu",&repeatNum);
    for(i = 0;i<repeatNum;i++) {
        scanf("%llu",&classMateNum);
        for(k = 0;k<classMateNum;k++) {
            scanf("%llu",&candyNum);
            candySumMod = candyNum%classMateNum;
            sum += candySumMod;
        }
        if(sum%classMateNum == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        sum = 0;
    }
}
