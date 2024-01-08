/*
 * EX7.c
 *
 *  Created on: Jan 6, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>

int main()
{
	unsigned x, y;
	printf("Enter value of x:");
	fflush(stdin), fflush(stdout);
	scanf("%u",&x);
	printf("Enter value of y:");
	fflush(stdin), fflush(stdout);
	scanf("%u",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping, value of x = %u \n", x);
	printf("After swapping, value of y = %u", y);
	return 0;
}
