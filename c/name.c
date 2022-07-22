#include <stdio.h>
#include <string.h>

int main (void)
{
	char name1[30];
	char name2[30];
	int index;	
	int index2;
	
	scanf ("%s", &name1);
	scanf ("%s", &name2);
	scanf ("%d", &index);
	
	index2 = strlen(name1) + strlen(name2);
	
	printf ("%d %d", index2, index);	
	
	return 0;
}
