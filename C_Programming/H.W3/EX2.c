/*H.W3
 * 	EX2
 *
 *  Created on: Jan 14, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x[100],sum=0.0, avg=0.0;
	int n, i;
	printf("Enter number of data:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("%d. Enter number:",i);
		fflush(stdin);fflush(stdout);
		scanf("%f", &x[i]);
		sum+=x[i];
	}
	avg=sum/n;
	printf("Average =%.2f",avg);
	return 0;
}

