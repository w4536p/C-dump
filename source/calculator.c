#include <string.h>
#include <stdio.h>

int main() {
	
	char ma[2] = "n"; //making arrays
        char op[2] = "+"; 
	char ac[2] = "y"; 
	int x,y,*ip0,*ip1; //setting integers
	float z,*fp0; //setting floats

	printf("print memory adresses? (y/n): "); //showing memory adresses for the variables used by the calculator
	scanf("%s", ma);
	if (!strcmp(ma, "y")){
		ip0 = &x;
		ip1 = &y;
		fp0 = &z;
		printf("number one adress is: %p\n", ip0);
		printf("number two adress is %p\n", ip1); 
		printf("sum adress is %p\n", fp0);
	}
	start: //loop start
	printf("enter operaion (+,-,*,/): "); //setting operation
  	
	scanf("%s", op);
	printf("enter integer one: "); //setting integer one
	scanf("%d", &x);
       
	printf("enter integer two: "); //setting integer two
	scanf("%d", &y);

        if (!strcmp(op, "+")){ //calculation code
		z = x + y;
	}
	else if (!strcmp(op, "-")){
		z = x - y;
        }
	else if (!strcmp(op, "*")){
        	z = x * y;
	}
	else if (!strcmp(op, "/")){ 
		z = (float)x / y;	
        }
	else{
	printf("invalid operation: %s\n", op); //invalid operation error
	printf("enter a valid operation (+,-,*,/): ");
	scanf("%s",op);
	}

	printf("\n%d%s%d=%.9f\n",x,op,y,z); //printing out the decimal sum
	printf("\ndo you want another calculation? (y/n): ");
	scanf("%s",ac);

        if (!strcmp(ac, "y")){ //going back to start:
		goto start;
        }
	else{
        return 0;
	}
	
}
