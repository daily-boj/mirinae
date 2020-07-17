#include <stdio.h>

double score[1000] = {0, };
int main () {
    double a,Max,average;
    int i;
    Max=0;
    average = 0;
    scanf("%lf",&a);
    for(i =0;i<a;i++) {
        scanf("%lf",&score[i]);
        //printf("%d\n",score[i]);
        if(Max<=score[i]) {
            Max = score[i];
        }
    }
    for(i=0;i<a;i++) {
        score[i] = (score[i]/Max)*100;
        average = average+ score[i];
        //printf("%lf\n",score[i]);
    }
    average = average/a;
    printf("%lf\n",average);
    return 0 ;

}
