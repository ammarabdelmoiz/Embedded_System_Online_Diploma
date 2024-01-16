/*H.W3
 * 	EX7
 *
 *  Created on: Jan 14, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char x[100];
	int count=0,i;
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	gets(x);

	for(i=0;i<x[i];i++)
	{
		if(x[i]!=0)
		{
			count++;
		}

	}
	printf("Length of string=%d",count);

	return 0;
}

