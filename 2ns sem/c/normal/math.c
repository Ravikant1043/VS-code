#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char words[10][10];
	int i, d;
	for (i = 0; i < 9; i++)
	{
		scanf("%s", words[i]);
		d = strcmp("stop", words[i]);
		if (d == 0)
			break;
	}
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		printf("%s", words[i]);
	}

	return 0;
}