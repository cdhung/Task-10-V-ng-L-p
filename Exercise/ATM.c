#include <stdio.h>

int main(){
	int pin, id, n;
	
	printf("Nhap ma pin: ");
	scanf("%d",&pin);
	printf("Nhap ID Card: ");
	scanf("%d",&id);
	if (pin == 123 && id == 456){
		printf("1. Rut Tien\n2. Chuyen khoan\n3. Xem so du\n4. Exit\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("\nNhap so tien can rut: ");
				break;
			case 2:
				printf("\nNhap so tien can chuyen: ");
				break;
			case 3:
				printf("\nSo du cua ban la: ");
				break;
			case 4:
				printf("\nExit");
				break;
			default:
				printf("Lua chon khong hop le!");
				break;
		}
	}
	else
		printf("Pin hoac ID card khong hop le");
}
