#include <stdio.h>

int main() {
    // B1: Khai báo các bi?n
    int month;
    int year;

    // B2: Yêu c?u ngu?i dùng nh?p tháng và nam
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
            // B5: N?u là nam nhu?n
            if (month >= 1 && month <= 12) {
                switch (month) {
                    case 1:  // Tháng 1
                    case 3:  // Tháng 3
                    case 5:  // Tháng 5
                    case 7:  // Tháng 7
                    case 8:  // Tháng 8
                    case 10: // Tháng 10
                    case 12: // Tháng 12
                        printf("Thang %d cua nam %d co 31 ngay.\n", month, year);
                        break;

                    case 4:  // Tháng 4
                    case 6:  // Tháng 6
                    case 9:  // Tháng 9
                    case 11: // Tháng 11
                        printf("Thang %d cua nam %d co 30 ngay.\n", month, year);
                        break;
                    case 2:  // Tháng 2 (nam nhu?n có 29 ngày)
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
            // B5: N?u không ph?i nam nhu?n
            if (month >= 1 && month <= 12) {
                switch (month) {
                    case 1:  // Tháng 1
                    case 3:  // Tháng 3
                    case 5:  // Tháng 5
                    case 7:  // Tháng 7
                    case 8:  // Tháng 8
                    case 10: // Tháng 10
                    case 12: // Tháng 12
                        printf("Thang %d cua nam %d co 31 ngay.\n", month, year);
                        break;

                    case 4:  // Tháng 4
                    case 6:  // Tháng 6
                    case 9:  // Tháng 9
                    case 11: // Tháng 11
                        printf("Thang %d cua nam %d co 30 ngay.\n", month, year);
                        break;
                    case 2:  // Tháng 2 (nam không nhu?n có 28 ngày)
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

