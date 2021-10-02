#include <stdio.h>

int main (){

	int n,x;
	
	x=0;
		
	printf("input: ");
	scanf("%d",&n);
	printf("%d" , n);

	while(x < 10000000){
		n++;
		x++;
		printf("%d ", n);
	}
	printf("\n");
	return 0;
}
