#include <stdio.h>

int main(){
	
	int min, max;
	
	printf("Nhap min = ");
	scanf("%d", &min);
	printf("Nhap max = ");
	scanf("%d", &max);
	
	for(int i = min; i <= max ; i++)
	{
		if(i%2==0)
		printf("%d ", i);
	}
}
