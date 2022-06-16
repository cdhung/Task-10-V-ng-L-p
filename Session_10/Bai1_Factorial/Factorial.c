#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, n, f = 1;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	if(n<0)
		printf("Invalid input (n>0)");
	else if(n == 0 || n == 1)
		printf("%d! = 1", n);
//	else{
//		f = n;
//		for(i=n-1;i>1;i--){
//			f *= i;
//		}
//		printf("%d! = %d", n, f);
//	}
	else{
		for(i=1;i<=n;i++){
			f *= i;
		}
		printf("%d! = %d", n, f);
	}
	return 0;
}
