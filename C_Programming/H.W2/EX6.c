/*H.M2
 * EX6.c
 *
 *  Created on: Jan 7, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x, sum=0,count=1;
	printf("Enter an integer:");
	fflush(stdin), fflush(stdout);
	scanf("%d",&x);
	while(count<=x){
		sum=sum+count;
		++count;
	}
	printf("Sum =%d",sum);
	return 0;

}