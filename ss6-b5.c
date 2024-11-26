#include <stdio.h>
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int year, month;
    int days;

    printf("Nhap vao nam: ");
    scanf("%d", &year);

    do {
        printf("Nhap vao thang (1-12): ");
        scanf("%d", &month);

        if (month < 1 || month > 12) {
            printf("Thang khong hop le. Hay nhap lai.\n");
        }
    } while (month < 1 || month > 12);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31; 
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30; 
    } else if (month == 2) {
        if (isLeapYear(year)) {
            days = 29;
        } else {
            days = 28;
        }
    }

    printf("Thang %d, nam %d co %d ngay.\n", month, year, days);

    return 0;
}
