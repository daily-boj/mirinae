#include <stdio.h>

int main () {
    long long int n,i;
    long long int pointNum = 5;
    long long int increaseNum = 4;
    scanf("%lld",&n);
for(i = 1; i<n; i++) {
    increaseNum+=3;
    pointNum+=increaseNum;
    }
printf("%lld\n",pointNum%45678);
return 0;

}
