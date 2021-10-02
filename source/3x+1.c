#include <stdio.h>

int main () { 
	int x; /*setting variables*/
	printf("enter any number: "); /*number input and first number output */
	scanf("%d", &x);
	printf("%d-", x);
        
	/*checks if number is one or less*/
	while(x > 1){ 
	/*if the number is even divides by two*/
	if(x % 2 == 0)
	{	
	        x= x / 2;
         	printf("%d-", x);
	}/*if the number is odd multiply's itself by three and adds one*/
	else{
	        x= 3 * x + 1;
                printf("%d-", x);
	}}
        return 0;
}
