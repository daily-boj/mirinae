#include <stdio.h>

int ascii[480000] = {0, };

int I(int R, int G , int B) {

    R *= 2126;
    G *= 7152;
    B *= 722;
    
    int intensity = R + G + B;
    if(0<=intensity && intensity<510000) {
        printf("#");
    } else if(510000 <= intensity && intensity < 1020000) {
        printf("o");
    } else if(1020000 <= intensity && intensity < 1530000) {
        printf("+");
    } else if(1530000 <= intensity && intensity < 2040000) {
        printf("-");
    } else if(2040000 <= intensity) {
        printf(".");
    }
}
void solve() {
    
    int N,M;
    scanf("%d %d",&N,&M);
    
    for(int t = 0; t < N*3*M; t++) {
    scanf("%d",&ascii[t]);
    }
    for(int t = 1; t <= N*3*M; t++) {
    if(t%3 == 0) {
    I(ascii[t-3],ascii[t-2],ascii[t-1]);
    } else {
    continue;
    }
    if(t%(3*M) == 0) {
        printf("\n");
    }
    }
}

int main() {

    solve();
    return 0;
}
