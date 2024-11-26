#include <stdio.h>

int main() {
    // L?p qua các s? t? 1 d?n 100
    for (int i = 1; i <= 100; i++) {
        // Ki?m tra n?u i là b?i s? c?a c? 3 và 5
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        // Ki?m tra n?u i là b?i s? c?a 3
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        // Ki?m tra n?u i là b?i s? c?a 5
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        // N?u không ph?i b?i s? c?a 3 hay 5, in ra s? i
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}

