#include <stdio.h>

int main() {
    // B1: Khai b�o c�c bi?n
    int month;
    int year;

    // B2: Y�u c?u ngu?i d�ng nh?p th�ng v� nam
    printf("Moi ban nhap vao thang: \n");
    scanf("%d", &month);
    printf("Moi ban nhap vao nam: \n");
    scanf("%d", &year);

    // B3: Ki?m tra nam h?p l?
    if(year <= 0) {
        printf("Nam nhap vao khong hop le !\n");
    } else {
        // B4: Ki?m tra nam nhu?n
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            // B5: N?u l� nam nhu?n
            if (month >= 1 && month <= 12) {
                switch (month) {
                    case 1:  // Th�ng 1
                    case 3:  // Th�ng 3
                    case 5:  // Th�ng 5
                    case 7:  // Th�ng 7
                    case 8:  // Th�ng 8
                    case 10: // Th�ng 10
                    case 12: // Th�ng 12
                        printf("Thang %d cua nam %d co 31 ngay.\n", month, year);
                        break;

                    case 4:  // Th�ng 4
                    case 6:  // Th�ng 6
                    case 9:  // Th�ng 9
                    case 11: // Th�ng 11
                        printf("Thang %d cua nam %d co 30 ngay.\n", month, year);
                        break;
                    case 2:  // Th�ng 2 (nam nhu?n c� 29 ng�y)
                        printf("Thang 2 cua nam %d co 29 ngay.\n", year);
                        break;
                    default:
                        printf("Thang nhap vao khong hop le\n");
                        break;
                }
            } else {
                printf("Thang nhap vao khong hop le\n");
            }
        } else {
            // B5: N?u kh�ng ph?i nam nhu?n
            if (month >= 1 && month <= 12) {
                switch (month) {
                    case 1:  // Th�ng 1
                    case 3:  // Th�ng 3
                    case 5:  // Th�ng 5
                    case 7:  // Th�ng 7
                    case 8:  // Th�ng 8
                    case 10: // Th�ng 10
                    case 12: // Th�ng 12
                        printf("Thang %d cua nam %d co 31 ngay.\n", month, year);
                        break;

                    case 4:  // Th�ng 4
                    case 6:  // Th�ng 6
                    case 9:  // Th�ng 9
                    case 11: // Th�ng 11
                        printf("Thang %d cua nam %d co 30 ngay.\n", month, year);
                        break;
                    case 2:  // Th�ng 2 (nam kh�ng nhu?n c� 28 ng�y)
                        printf("Thang 2 cua nam %d co 28 ngay.\n", year);
                        break;
                    default:
                        printf("Thang nhap vao khong hop le\n");
                        break;
                }
            } else {
                printf("Thang nhap vao khong hop le\n");
            }
        }
    }

    return 0;
}

