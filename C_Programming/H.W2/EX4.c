/*H.M2
 * EX4.c
 *
 *  Created on: Jan 7, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{

	float x;
	printf("Enter number:");
	fflush(stdin), fflush(stdout);
	scanf("%f",&x);
	if(x>0){
		printf("%.2f is positive.",x);
	}
	else if(0>x){
		printf("%.2f is negative.",x);
	}
	else{
		printf("You entered zero.");
	}
	return 0;

}