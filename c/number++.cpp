#include <stdio.h>
int main (void)
{
	int a, c, i;
	c = 0;
	scanf ("%d", &a);

	
	for (i=1; i<=a; i++)
	{
		if (i%2==0)
			c=c+i;
	}
	printf ("%d", c);
	return 0;
}
