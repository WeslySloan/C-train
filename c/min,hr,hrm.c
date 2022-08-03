#include <stdio.h>
#define h 60



int main (void)
{	
	while ( 1 )
	{
		int min;
		scanf ("%d", &min);
		if ( min <= 0)
		{
			break;
		}
		int hr  = min / h;
		int hrm = min % h;
		printf ("Time in minute(s):%5d = %2d hour(s) and %2d minute(s)\n", min, hr, hrm);
	}
	
	return 0;
}
