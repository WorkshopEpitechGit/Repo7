#include <stdio.h>

int main() {
    int n = 20;
    int t1 = 0;
    int t2 = 1;
    int nextnum;

    printf(" suite de Fibonacci : ");
    for (int i = 1; i <= n; ++i) {
        printf("%d", t1);
        if (i < n) {
            printf(", ");
        }   
        nextnum = t1 + t2;
        t1 = t2;
        t2 = nextnum;
    }    
    printf("\n");
    return 0;
}
