#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int count = 1, count1 = 0;
	int pin, id, n;
	char ch = 'Y';
	do{
		printf("\nNhap Card ID: ");
		scanf("%d", &id);
		printf("\nNhap ma pin: ");
		scanf("%d", &pin);
		if(id == 123 && pin == 456){
			do{
				printf("\n1. Rut Tien\n2. Kiem tra so du\n3. Chuyen Khoan\n4. Thoat\n");
				printf("\nNhap lua chon: ");
				scanf("%d", &n);
				switch(n){
					case 1:
						printf("\n1. So tien can rut: ");
						break;
					case 2:
						printf("\nSo du cua ban la: ");
						break;
					case 3:
						printf("\nNhap STK: ");
						break;
					case 4:
						printf("\nCam on quy khach da su dung dich vu!");
						exit(0);
						break;
					default:
						printf("\nLua chon khong hop le. Vui long nhap lai!\n");
						if(n<=0 || n>=4){
							count1++;
							if(count1==3){
								system("cls");
								printf("\nBan da chon sai 3 lan. Vui long dang nhap lai!");
								exit(0);
							}
						}
						continue;
//						break;
				}
				printf("\n\nBan muon tiep tuc khong Y/N: ");
				fflush(stdin);
				ch = getchar();
			}while(ch == 'Y' || ch == 'y');
			exit(0);
		}
		else{
			printf("\nMa pin hoac Card id khong dung!!!");
			printf("\nBan con %d lan nhap lai.\n", 3-count);
			count++;
		}
	}while(count<=3);
		system("cls");
		printf("\nThe cua ban da bi khoa!");
	return 0;
}
