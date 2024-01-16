/*H.W3
 * 	EX5
 *
 *  Created on: Jan 14, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x[20], n, i,srch;
	printf("Enter number of elements:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nEnter the element to be searched:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&srch);
	for(i=0;i<n;i++)
	{
		if(x[i]==srch)
		{
			printf("Number found at the location =%d",i+1);
			break;
		}
	}
	printf("number not found");

	return 0;
}

