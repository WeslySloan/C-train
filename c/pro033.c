#include <stdio.h>
int main (void)
{
	int first, a, b;
	scanf("%d", &first);
	int numArr[first];
	for (a=0; a<first ; a++)
	{
		scanf ("%d", &numArr[a]);
	}
	for (b=first-1; b>=0 ; b--)
	{
		printf ("%d ", numArr[b]);
	}
	return 0;
}
