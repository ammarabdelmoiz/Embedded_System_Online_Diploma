/*
 * EX6.c
 *
 *  Created on: Jan 6, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>

int main()
{
	float x, y, temp=0.0;
	printf("Enter value of x:");
	fflush(stdin), fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of y:");
	fflush(stdin), fflush(stdout);
	scanf("%f",&y);
	temp=x;
	x=y;
	y=temp;
	printf("After swapping, value of x = %.2f \n", x);
	printf("After swapping, value of y = %.2f", y);
	return 0;
}
