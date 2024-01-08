/*
 * EX5.c
 *
 *  Created on: Jan 6, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>

int main()
{
	char c;
	printf("Enter a character:");
	fflush(stdin), fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c= %d",c,c);
	return 0;
}
