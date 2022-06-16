#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, j, n, a = 1, a1 = 1, a2 = 1;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(n==1 || n==2)
		printf("%d,", a);
	else{
		printf("%d,%d,", a1, a2);
		for(i=3; i<=n; i++){
			a = a1 + a2;
			a1 = a2;
			a2 = a;
			printf("%d,", a);
		}
	}
	return 0;
}
