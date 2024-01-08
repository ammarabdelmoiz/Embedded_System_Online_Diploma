/*H.M2
 * EX8.c
 *
 *  Created on: Jan 7, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{

	char c;
	float x, y, operator;
	printf("Enter operator either +, - , *, or /:");
	fflush(stdin), fflush(stdout);
	scanf("%c",&c);
	printf("Enter two operands:");
	scanf("%f%f",&x,&y);

	if(c=='+'){
		operator=x+y;
		printf("%.2f + %.2f = %.2f",x,y,operator);
	}
	else if(c=='-'){
		operator=x-y;
		printf("%.2f - %.2f = %.2f",x,y,operator);
	}
	else if(c=='*'){
		operator=x*y;
		printf("%.2f * %.2f = %.2f",x,y,operator);
	}
	else if(c=='/'){
		operator=x/y;
		printf("%.2f / %.2f = %.2f",x,y,operator);
	}
	return 0;

}