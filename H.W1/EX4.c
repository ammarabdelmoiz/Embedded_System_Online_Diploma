/*
 * EX4.c
 *
 *  Created on: Jan 6, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>

int main()
{
	float x, y, multiply=0.0;
	printf("Enter two floating nums:");
	fflush(stdin), fflush(stdout);
	scanf("%f \n %f",&x,&y);
	multiply=x*y;
	printf("Product: %f",multiply);
	return 0;
}
