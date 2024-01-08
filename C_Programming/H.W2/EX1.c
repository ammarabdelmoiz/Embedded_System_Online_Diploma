/*H.M2
 * EX1.c
 *
 *  Created on: Jan 7, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	printf("Enter an integer you want to check either even or odd:");
	fflush(stdin), fflush(stdout);
	scanf("%d",&x);
	if(x % 2==0)
		printf("%d is even:",x);
	else
		printf("%d is odd",x);
	return 0;
}

ORRRR

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	printf("Enter an alphabet:");
	fflush(stdin), fflush(stdout);
	scanf("%d",&x);
	((x%2)==0)?printf("%d is even",x):printf("%d is odd",x);
		return 0;
}

