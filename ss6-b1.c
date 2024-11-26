#include <stdio.h>

int main() {
    int n[5]; 
    int sum= 0; 

    printf("Nhap 5 so nguyen bat ky:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &n[i]);

        if (n[i] % 2 != 0) {
            sum += n[i];
        }
    }

    printf("Tong cac so le la: %d\n", sum);

    return 0;
}
