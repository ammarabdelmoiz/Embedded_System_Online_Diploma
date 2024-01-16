/*H.W3
 * 	EX3
 *
 *  Created on: Jan 14, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x[9][9], t[9][9], n ,nn, r,c;
	printf("Enter elements of Rows and Columns:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&n,&nn);
	printf("Enter elements of Matrix\n");
	fflush(stdin);fflush(stdout);
	for(r=0;r<n;r++){
		for(c=0;c<nn;c++)
		{
			printf("Enter elements x%d%d:",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%d",&x[r][c]);
		}
	}

	printf("\n");

	printf("Entered Matrix:\n");
	for(r=0;r<n;r++)
	{
		for(c=0;c<nn;c++)
		{
			printf(" %d ",x[r][c]);
		}
		printf("\n");

	}

	printf("\n");

	printf("Transpose of Matrix:\n");
	for(r=0;r<nn;r++)
	{
		for(c=0;c<n;c++)
		{
			t[r][c]=x[c][r];

		}
	}

	for(r=0;r<nn;r++)
		{
			for(c=0;c<n;c++)
			{
				printf(" %d ",t[r][c]);
			}
			printf("\n");

		}
		return 0;
	}

