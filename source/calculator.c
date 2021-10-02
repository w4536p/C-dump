#include <string.h>
#include <stdio.h>

int main() {

        char op[2] = "+"; /*making arrays*/
	char ac[2] = "y"; 
	int x,y; /*setting integers*/
	float z; /*setting floats*/

        start: /*loop start*/
	printf("enter operaion (+,-,*,/): "); /*setting operation*/
        
	scanf("%s",op);
	printf("enter integer one: "); /*setting integer one*/
	scanf("%d",&x);
       
	printf("enter integer two: "); /*setting integer two*/
	scanf("%d",&y);

        if (!strcmp(op, "+")){; /*calculation code*/
		z = x + y;
	}
	else if (!strcmp(op, "-")){;
		z = x - y;
        }
	else if (!strcmp(op, "*")){;
        	z = x * y;
	}
	else if (!strcmp(op, "/")){ 
		z = (float)x / y;	
        }
	else{
	printf("invalid operation: %s", op); /*invalid operation error*/
	printf("enter a valid operation (+,-,*,/): ");
	scanf("%s",op);
	}

	printf("\n%d%s%d=%.9f\n",x,op,y,z); /*printing out the decimal sum*/
	printf("\ndo you want another calculation? (y/n): "); /*asking if another calculation is needed*/
	scanf("%s",ac);

        if (!strcmp(ac, "y")){ /*going back to start:*/
		goto start;
        }
	else{
        return 0;
	}
	
}
