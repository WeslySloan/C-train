#include <stdio.h>
int main (void)
{
	while (1)
	{
		float a;
		float b;
		float c;
		float d;
		int x;
		x = scanf ("%f", &a);
		if (x==0)
		{
			break;
		}
		scanf ("%f", &b);
		c = a-b;
		d = a*b;
		c = c/d;
		printf ("%.3f\n", c);
		
	}
	
	return 0;
}
