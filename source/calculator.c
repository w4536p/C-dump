#include <string.h>
#include <stdio.h>

int main() {
	
	char ma[2] = "n"; //making arrays
        char op[2] = "+"; 
	char ac[2] = "y"; 
	int x,y,*ip0,*ip1; //setting integers
	float z,*fp0; //setting floats

	ip0 = &x; //making the numbers adresses correspond to ip0 ip1 fp0
	ip1 = &y;
	fp0 = &z;

	printf("print memory adresses? (y/n): "); //memory adresses for the numbers
	scanf("%s", ma);
	if (!strcmp(ma, "y")){
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
	printf("invalid operation: %s", op); //invalid operation error
	printf("enter a valid operation (+,-,*,/): ");
	scanf("%s",op);
	}

	printf("\n%d%s%d=%.9f\n",x,op,y,z); //printing out the decimal sum
	printf("\ndo you want another calculation? (y/n): "); //asking if another calculation is needed
	scanf("%s",ac);

        if (!strcmp(ac, "y")){ //going back to start:
		goto start;
        }
	else{
        return 0;
	}	
}
