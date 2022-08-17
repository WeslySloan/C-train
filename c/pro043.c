#include <stdio.h>
int main(void)
{
	int i,j,n;
	int cnt = 0;
	
	scanf("%d", &n);
	
	if(n>=2) {
		cnt++;
	}

	for(i = 3; i <= n; i++) 
	{
		for(j = 3; j < i; j+=2) 
		{
			if(i % j == 0)
			{
				break;
			}
		}
		if(i == j)
		{
			cnt++;
	}
	}
printf("%d", cnt);
}
