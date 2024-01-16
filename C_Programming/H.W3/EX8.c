/*H.W3
 * 	EX8
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
	int i=0,len,temp;
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	gets(x);
	len=strlen(x)-1;
	while(i<len)
	{
				temp=x[i];
				x[i]=x[len];
				x[len]=temp;
				i++;
				len--;
	}

	printf("Y=%s",x);

	return 0;
}

