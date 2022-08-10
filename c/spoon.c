#include <stdio.h>
int main (void)
{
	double p;
	float c;
	double tb;
	double ts;
	scanf("%f", &c);
	p=0.5*c;
	tb=16*c;
	ts=48*c;
	
	printf ("%f cups are equivalent to each of the following:\n", c);
	printf ("%f pints\n", p);
	printf ("%f tablespoons\n", tb);
	printf ("%f teaspoons", ts);
	
	return 0;
}
