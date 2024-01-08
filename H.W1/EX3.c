/*
 * EX3.c
 *
 *  Created on: Jan 6, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>

int main()
{
	int x,y, sum=0;
	printf("Enter two intgers:");
	fflush(stdin), fflush(stdout);
	scanf("%d %d",&x,&y);
	sum=x+y;
	printf("Sum:%d",sum);
	return 0;
}