#include <stdio.h>

int main () { 
	int x,y,f,n; /*setting variables*/
	printf("enter any number: "); /*number input*/
	scanf("%d", &x);
	printf("how much numbers should it be automated for: "); /*how much more it should calculate*/
	scanf("%d", &n);

	f = x; /*makes it automated for n numbers*/
	y = x + n + 1;

        start: /*goto start position and prtinting x out*/
	printf("%d-", x);
	while(x != 1){ /*checks if number is 1 or less*/

	if(x % 2 == 0){	/*if the number is even divides by two and prints x*/
	        x = 0.5 * x;
         	printf("%d-", x);
	}

	else{ /*if the number is odd multiply's itself by three, adds one and prints x*/
	        x = 3 * x + 1;
                printf("%d-", x);
	}}

	if (x == 1){ /*checks if x is 1 and if it is makes x f, adds one to f and makes a new line*/
	f = f + 1;
	x = f;
        printf("\n");
	}

	if(f == y){ /*if f is y it quits the program*/
	return 0;
	}

	else{ /*otherwise it goes to start*/
	goto start;
	}

        return 0;
}
