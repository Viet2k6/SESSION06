#include <stdio.h>
int main() {
    int n[5];       
    int so_chan = 0;    
    int so_le = 0;     

    printf("Nhap vao 5 so nguyen bat ky:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0) {
            so_chan++;   
        } else {
            so_le++;   
        }
    }
    
	printf("So luong so chan: %d\n", so_chan);
    printf("So luong so le: %d\n", so_le);

    return 0;
}
