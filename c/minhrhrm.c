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
		printf ("Time in minitue(s):%5d =%3d hour(s) and%3d minute(s)\n", min, hr, hrm);
	}
	
	return 0;
}
