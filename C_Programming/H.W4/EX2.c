/*H.W4
 * 	EX2
 *
 *  Created on: Jan 25, 2024
 *      Author: Ammar Abdelmoiz
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int x);

int main()
{

	int a;
	printf("Enter an positive integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("Factorial of %d = %d ",a,factorial(a));

	return 0;
}

int factorial(int x)
{
	if(x==0||x==1)
		return 1;
	else return x*factorial(x-1);


}
