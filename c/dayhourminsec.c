#include <stdio.h>
int main (void)
{
	int sec;
	int sec1;
	int min;
	int hour;
	int day;
	
	while (1)
	{	
		scanf ("%d", &sec);
		if (sec<=0)
		{
			break;
		}
		sec1 = sec;
		
		min = sec / 60;
		sec = sec % 60;
		hour = min / 60;
		min = min % 60;
		day = hour / 24;
		hour = hour % 24;
		
		printf ("%d second(s) = %d day(s) %d hour(s) %d minute(s) and %d second(s)\n", sec1, day, hour, min, sec);
	}
	return 0;
}
