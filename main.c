#include <stdio.h>

int main() {
    int n = 10;
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    printf("Suite de Fibonacci : ");
    for (int i = 1; i <= n; ++i) {
        printf("%d", t1);
        if (i < n) {
            printf(", ");
        }   
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }    
    printf("\n");
    return 0;
}
