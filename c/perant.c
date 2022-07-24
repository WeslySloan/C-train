#include <stdio.h>

int main (void)
{
	float first;
	float second;
	float third;
	float forth;
	float all;
	float percant;
	
	scanf ("%f", &first);
	scanf ("%f", &second);
	scanf ("%f", &third);
	scanf ("%f", &forth);
	
	all = first + second + third + forth;
	percant = forth / all ;
	
	printf ("%.2f%%", percant*100);
			
	return 0;
}
