#include <stdio.h>

int han() {
    int X = 0;
    int hansu[3] = {0, };
    int point = 0;
    scanf("%d",&X);
    
    int hund = 100;
    int i ;
    if(X >= 100) {
         i = 100;
    } else {
        i = 0;
    }
    while(i<=X) {
        
        if(X < 100) {
            point = X - 99;
            
            break;
        } else if(X>=100) {
            hansu[0] = hund/100;
            hansu[1] = (hund%100)/10;
            hansu[2] = (hund%100)%10;
        }
        hund++;
        i++;
        if(hansu[0] - hansu[1] == hansu[1] - hansu[2]) {
            point++;
            
        } else {
            continue;
        }
        }
        point+= 99;

        return point;
        }
        
        int main() {
            printf("%d\n", han());
            return 0 ;
        }
        
