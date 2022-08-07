#include <stdio.h>
#include <string.h>
int main (void)
{
	char s[20];
	int a = 0;
	int b = 0;
	int c = 0;
	scanf ("%s", &s);
	a = strlen(s);
	while (b<a+1)
	{
		printf("*%-*.*s*\n", a, b, s);
		b = b+1;
	}
	return 0;
} 
