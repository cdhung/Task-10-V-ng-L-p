#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, num1, num2, total = 0;
	
	printf("Num1 = ");
	scanf("%d", &num1);
	printf("Num2 = ");
	scanf("%d", &num2);
	for(i = num1; i<=num2; i++){
		if(i%2!=0)
			total += i;
	}
	printf("Sum of odd numbers = %d", total);
	return 0;
}
