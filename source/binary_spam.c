/*makes random binary digits in format 1001010 10011010 and makes a random amount of those rounded to the nearest byte*/
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

int main(){
	
	srand(time(0)); /*makes rand actually random every other second*/

	int n = rand() % 15000; /*how much binary digits to print*/
	int nn = floor(n / 8); /*converts that to bytes and removes the leftover digits*/
	int c = rand() % 2; /*can be anything but made it random anyway*/
	int x = 0;
	int z = 0;
	int zz = 0;

	while(nn % 2 != 0) { /*making it show only bytes instead of something like 10111 or 01*/
		nn++;
		printf("\n%d\n", nn);
	}
	nn = nn * 8; /*makes it print the binary sigits without leftovers*/
	n = nn;
	start:
	x++;
	z++;
	c = rand() % 2; /*randomiser*/
	
	if(c == 1){
		printf("1");
	}
	else{
		printf("0");
	}		
	if(z == 8){ /*every 8 digits prints a blank spot*/
		printf(" ");
		z = 0;
		zz++; /*goes up by one every 8 digits*/
	}
	if(zz == 21){ /*makes it so that numbers dont cut off when on 190 character horizontal lengh*/
		printf("\n");
		zz = 0; 
	}
	if(n > x){
		sleep(0.1);
		goto start;
	}
	else{
		printf("\n");
		return 0;
	}
}
