/*H.M2
 * EX7.c
 *
 *  Created on: Jan 7, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x, product=1,count;
	printf("Enter an integer:");
	fflush(stdin), fflush(stdout);
	scanf("%d",&x);
	if(x>0){
		for(count=1;count<=x;count++){
			product*=count;
		}
		printf("Factorial =%d",product);
	}
	else if(x==0){
		printf("Factorial 0 is 1 ");
	}
	else
		printf("Error!!! factorial of negative doesn't exist.");
	return 0;

}