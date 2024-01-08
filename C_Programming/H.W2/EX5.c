/*H.M2
 * EX5.c
 *
 *  Created on: Jan 7, 2024
 *      Author: Ammar Abdelmoiz
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{

	char c;
	printf("Enter a character:");
	fflush(stdin), fflush(stdout);
	scanf("%c",&c);
	if((c>='A' && c<='Z') || (c>='a' && c<='z'))
	{
		printf("%c is an alphabet.",c);
	}
	else
		printf("%c is not alphabet.",c);

	return 0;

}