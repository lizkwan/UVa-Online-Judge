#include <stdio.h>

int main ()
{
	int count,i,rem;
	long int n,res;

	scanf ("%d",&count);

	for (i=0; i<count; i++)
	{
		scanf ("%ld",&n);
		res = ((((((n*567)/9)+7492)*235)/47)-498);
		res = res / 10;
		rem = res % 10;
		if (rem < 0)
			rem = rem * -1;
		printf ("%d\n",rem);
	}
	return 0;
}