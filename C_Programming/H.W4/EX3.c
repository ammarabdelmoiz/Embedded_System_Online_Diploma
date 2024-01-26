/*H.W4
 * 	EX3
 *
 *  Created on: Jan 25, 2024
 *      Author: Ammar Abdelmoiz
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverse(char str[], int i,int j);

int main()
{

	char str[100];
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	gets(str);
	reverse(str,0,strlen(str));
	return 0;
}

void reverse(char str[], int i,int j)
{
	char temp;
	if (j<=i)
	{
		printf("%s",str);
	}
	else
	{
		temp=str[i];
		str[i]=str[j-1];
		str[j-1]=temp;
		i++;
		j--;
		reverse(str,i,j);
	}
}