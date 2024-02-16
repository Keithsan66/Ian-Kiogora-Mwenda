#include <stdio.h>

void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            printf("%d", t1);
            continue;
        }
        if(i == 2) {
            printf(", %d", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        printf(", %d", nextTerm);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

 
    if(n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fibonacci(n);
    }

    return 0;
}
