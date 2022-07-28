#include <stdio.h>
int main(void)
{
	int inA;
	double inB;
	double out;
	scanf ("%d %lf", &inA, &inB);
	switch ( inA )
	{
		case 1:
			inB = inB-17850;
			inB = inB*0.28;
			out = 2677.5+inB;
			break;	

		case 2:
			inB = inB-23900;
			inB = inB*0.28;
			out = 3585+inB;
			break;

		case 3:
			inB = inB-29750;
			inB = inB*0.28;
			out = 4462.5+inB;
			break;

		case 4:
			inB = inB-14875;
			inB = inB*0.28;
			out = 2231.25+inB;
			if (out<1500)
				out = 1500;
			break;
	}
	printf ("%0.2lf", out);
	return 0;
}
