#include <stdio.h>

int main ()
{
	int fz,an,ef,totalcase,farmers,i,j;
	double res;

	scanf ("%d",&totalcase);

	for (i=0; i<totalcase; i++) {
		scanf ("%d",&farmers);
		res = 0;
		for (j=0; j<farmers; j++) {
			scanf ("%d %d %d", &fz, &an, &ef);
			res = res + (fz * ef);
		}
		printf ("%.0f\n",res);
	}
	return 0;
}