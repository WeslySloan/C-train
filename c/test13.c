#include <stdio.h>
#include <string.h>

int main (void)
{
	char name1[30];
	char name2[30];

	float a;
	float b;
	float c;
	float d;
	
	scanf ("%s", name1);
	scanf ("%s", name2);
	scanf ("%f", &a);
	scanf ("%f", &b);
	scanf ("%f", &c);
	
	d = a + b + c;
	d = d / 3;
	
	printf ("\"%s", name1);
	printf ("%17s\"", name2);
	printf ("%8.1f", d);
	
	return 0;
	
}

