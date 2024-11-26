#include <stdio.h>

int main() {
    int number[5];  
    int sochan = 0; 
    int sole = 0;  
    int i;

    printf("Nhap vao 5 so nguyen:\n");
    for (i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &number[i]);
    }
 
    for (i = 0; i < 5; i++) {
        if (number[i] % 2 == 0) { 
            sochan++;
        } else { 
            sole++;
        }
    }

    printf("So chan co trong day so la: %d\n", sochan);
    printf("So luong so le la : %d\n", sole);

    return 0;
}

