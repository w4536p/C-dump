	// really bad method

#include <stdio.h>

int main () {
 
	long exponent, int1, sum;
	printf("enter exponent(min 5): ");
        scanf("%20ld", &exponent);
        printf("enter integer: ");
        scanf("%20ld", &int1);
	if (exponent >= 20){
		printf("exponent higher than 19 has caused a integer overflow.\nexiting.\n");
		return 0;
	}
        const long root = int1; // prepping
	long x1, diff;
        sum = int1 * root; // first exponent x^2 by now
        x1 = sum; // old int1
        int1 = sum * root; // second exponent x^3 by now
        diff = sum - x1; // calulating difference
        x1 = sum; // old int1
        sum = sum * root; // third exponent x^4 by now
        diff = sum - x1; // calculating difference
        exponent = exponent - 4;
        while (exponent != 0){
        exponent--;
        x1 = sum; // old int1
        sum = (diff * root) + x1; // calculating exponent using the root, difference and x1
	diff = sum - x1;
        }
	if (sum <= 0){
		printf("integer overflow.\ntry lowering your numbers.\nexiting.\n");
		return 0;	
	}
	printf("\n%ld\n", sum); // outputing sum
	return 0;


	// really bad method
}
