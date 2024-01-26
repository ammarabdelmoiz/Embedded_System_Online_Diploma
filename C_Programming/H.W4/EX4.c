/*H.W4
 * 	EX4
 *
 *  Created on: Jan 25, 2024
 *      Author: Ammar Abdelmoiz
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int power(int x,int y);

int main(void)
{
	int x,y;
	printf("Enter base number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Enter power number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	printf("%d * %d=%d",x,y,power(x,y));
	return 0;
}

int power(int x,int y)
{

	if(y!=0)

		return (x * power(x,y-1));

	else
		return 1;
}