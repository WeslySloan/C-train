#include <stdio.h>
int main (void)
{
	long long int i, n, np, k, kp, nmk, nmkp, nck;
	scanf ("%lld", &n);
	scanf ("%lld", &k);
	np = n;
	kp = k;
	nmk = n-k;
	nmkp = nmk;
	for (i=n-1; i=>0 ; i--)
	{
		np = np*i;
	}
	for (i=k-1; i=>0 ; i--)
	{
		kp = kp*i;
	}
	for (i=nmk-1; i=>0 ; i--)
	{
		nmkp = nmkp*i;
	}
	nck = np/kp/nmkp;
	printf ("%lld", nck);
	return 0;
}
/*
for (i=k-1; i>0 ; i--)
	{
		kp = kp*i;
	}
	for (i=nmk-1; i>0 ; i--)
	{
		nmkp = nmkp*i;
	}
	nck = np/kp*nmkp;
*/
