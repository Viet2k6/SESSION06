#include <stdio.h>
int main() {
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    printf("Các uoc cua so %d la: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
