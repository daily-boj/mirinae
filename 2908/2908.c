#include <stdio.h>
void solve() {
    int num1 = 0;
    int num2 = 0;
    char num[3];
    char numTwo[3];
    scanf("%s",num);
    scanf("%s",numTwo);
    num1 = (num[2] - '0')*100 + (num[1]-'0')*10+ (num[0]-'0');
    num2 = (numTwo[2] - '0')*100 + (numTwo[1]-'0')*10+ (numTwo[0]-'0');
    if(num1>num2) {
    printf("%d\n",num1); 
    } else {
    printf("%d\n",num2);
    }
}
int main() {
    solve();
}
