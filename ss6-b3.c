#include<stdio.h>
int main(){
    int a, b, c, d;    
	int firstNumber = 1;
	int secondNumber = 4;
	int thirdNumber = 1;
	int fourthNumber = 2;
	
    do {
    printf(" Nhap so thu 1: ");
	scanf("%d", &a);
	printf(" Nhap so thu 2: ");
	scanf("%d", &b);	
	printf(" Nhap so thu 3: ");
	scanf("%d", &c);	
	printf(" Nhap so thu 4: ");
	scanf("%d", &d);

	if ( a != firstNumber || b != secondNumber || c != thirdNumber || d != fourthNumber ){
		printf("Mat khau sai roi! Nhap lai di: \n");
	   }
	}	while ( a != firstNumber || b != secondNumber || c != thirdNumber || d != fourthNumber );
		printf("Dung roi! Vay mat khau la: %d %d %d %d. ", firstNumber, secondNumber, thirdNumber, fourthNumber);
	return 0;	
}
