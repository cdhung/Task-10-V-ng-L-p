#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i = 1, age;
	char name[20];
	printf("Nhap ten: ");
//	scanf("%s", &name); 				// Nhap ten khong co khoang trang
	fgets(name, sizeof(name), stdin);	// Nhap ten co khoang trang
	printf("Nhap tuoi: ");
	scanf("%d", &age);
	
	//su dung while
//	while(i<=age){
//		printf("%d.\t%s", i, name);
//		i++;
//	}

	//su dung for
	for(i=1;i<=age;i++)
		printf("%d.\t%s\n", i, name);	// in ra ten
//		puts(name); 					// in ra ten
	return 0;
}
