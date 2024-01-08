/*H.M2
 * EX3.c
 *
 *  Created on: Jan 7, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{

	float x, y, z;
	printf("Enter three numbers:");
	fflush(stdin), fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y&&x>z){
		printf("Largest number =%.2f",x);
	}
	else if(y>x&&y>z){
		printf("Largest number =%.2f",y);
	}
	else{
		printf("Largest number =%.2f",z);
	}
	return 0;

}