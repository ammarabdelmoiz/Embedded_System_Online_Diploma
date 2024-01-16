/*H.W3
 * 	EX4
 *
 *  Created on: Jan 14, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x[20], n, i,nn,nnn;
	printf("Enter number of elements:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}

	printf(" Enter the element to be inserted:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&nn);

	printf("Enter the location:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&nnn);

	for(i=n;i>=nnn;i--)
	{
		x[i]=x[i-1];
	}
	n++;
	x[nnn-1]=nn;
	for(i=0; i<n;i++)
	{
		printf("\n %d",x[i]);
	}
	return 0;
}
