/*H.W3
 * 	EX1
 *
 *  Created on: Jan 14, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a[2][2], b[2][2], sum[2][2];
	int r,c;
	printf("enter elements for 1st matrix\n");
	fflush(stdin);fflush(stdout);
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter a%d%d: ",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[r][c]);
		}

	}

	printf("----------------------------------------\n");

	printf("enter elements for 2nd matrix\n");
	fflush(stdin);fflush(stdout);
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter a%d%d: ",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[r][c]);
		}
	}
	printf("----------------------------------------\n");


	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			sum[r][c]=a[r][c]+b[r][c];
		}
	}
	printf("----------------------------------------\n");

	printf("Sum of matrix:\n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%.1f",sum[r][c]);
			printf("\t");
		}
		printf("\n");
	}
			return 0;
		}

