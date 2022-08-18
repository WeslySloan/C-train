#include <stdio.h>
int main (void)
{
	int index = 0;
	char in;
	while ((in=getchar())!='\n')
	{
		if (in == '(')
			index++;
		else if (in == ')')
			index--;
	}
	if (index==0)
		printf("YES");
	else
		printf("NO");
	return 0;
}
