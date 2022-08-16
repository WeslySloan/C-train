#include <stdio.h>
int main (void)
{
	long long int i, n, np, k, kp, nmk, nmkp, nck;
	scanf ("%lld", &n);
	scanf ("%lld", &k);
	np=1;
	kp=1;
	nmkp=1;
	nmk=n-k;
	for (i=n; i>0 ; i--)
	{
		np = np*i;
	}
	for (i=k; i>0 ; i--)
	{
		kp = kp*i;
	}
	for (i=nmk; i>0 ; i--)
	{
		nmkp = nmkp*i;
	}
	nck = np/kp/nmkp;
	printf ("%lld", nck);
	return 0;
}
