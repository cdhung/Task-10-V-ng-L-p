#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, n;
	printf("Input n = ");
	scanf("%d", &n);
	
	printf("Muliplication table of %d:\n", n);
	for(i=0; i<=10; i++)
		printf("%d x %d\t= %d\n", n, i, n*i);
	return 0;
}
