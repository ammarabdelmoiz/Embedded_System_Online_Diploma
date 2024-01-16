/*H.W3
 * 	EX6
 *
 *  Created on: Jan 14, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char x[100],f;
	int count=0,i;
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	gets(x);

	printf("Enter a character to find frequency:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&f);

	for(i=0;i<strlen(x);i++)
	{
		if(x[i]==f)
		{
			count++;
		}

	}
	printf("Frequency of %c=%d",f,count);

		return 0;
}

