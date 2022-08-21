#include <stdio.h>
int main (void)
{
	long long int num1;
	long long int num2;
	long long int num3;
	scanf ("%lld %lld", &num1, &num2);
	while (num1==num2)
	{	
		if (num1<=num2)
		{
			num3 = num1 * num1 + num3;
			num1++;
		}
		printf ("%lld\n", num3);
		scanf ("%lld %lld", &num1, &num2);	 
	}
	return 0;
}
