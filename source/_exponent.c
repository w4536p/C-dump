#include <stdio.h>

int main (void){
	
	long long int1, exponent;

	printf("enter number: "); // taking inputs
	scanf("%lld", &int1);
	printf("enter exponent: ");
        scanf("%lld", &exponent);
	const long long root = int1; // setting root
	long long x = exponent; // setting counter

	while (x != 0){
		int1 = int1 * root; // exponent code
		x--; // decreasing counter
	}
	if (int1 <= 0){ // cheacking for integer overflow
		printf("integer overflow.\n");
		return 0;
	}
	printf("%lld^%lld is %lld\n", root, exponent, int1); //printing output
}
