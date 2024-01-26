/*H.W4
 * 	EX1
 *
 *  Created on: Jan 25, 2024
 *      Author: Ammar Abdelmoiz
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prime(int x);

int main()
{

	int a,b,i;
	printf("Enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&a,&b);
	printf("Prime numbers between %d and %d are:",a,b);
	for(i=a+1;i<b;i++)
	{
		if(prime(i)==0)
			printf("%d ",i);
	}

	return 0;
}

int prime(int x)
{
	int i,flage=0;
	for(i=2;i<x;i++)
	{
		if (x%i==0)
		{
			flage=1;
			break;
		}

	}

	return flage;
}
