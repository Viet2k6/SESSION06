#include <stdio.h>
int main() {    
	int n, count = 0, current_number = 2;
    printf("Nhap 1 so nguyen n bat ky: ");
    scanf("%d", &n);
    do {
    	if (n < 0) {
          printf("Khong hop le! Hay nhap lai: ");
          scanf("%d", &n);
          }
    } while (n < 0); 
	printf("%d So nguyen to dau tien la: ", n);   
    while (count < n) {
        int prime = 1; //
        for (int i = 2; i < current_number; i++) {
            if (current_number % i == 0) {
                prime = 0; 
                break;
            }
        }
        if (prime) {
            printf("%d ", current_number);
            count++;
        }
        current_number++;
    }
    return 0;
}
