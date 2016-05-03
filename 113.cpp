#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[])
{
	double n,p,k;

	while (scanf("%lf\n%lf",&n,&p)==2)
	{
		k=pow(p,(1.0/n));
		printf ("%.0lf\n",k);
	}
	return 1;
}