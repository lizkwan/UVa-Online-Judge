#include <stdio.h>
void main ()
{
	double a,b,c;
	while (scanf ("%lf %lf",&a,&b)!=EOF)
	{
		if (a>b)
			c=a-b;
			
		else
			c=b-a;
		printf ("%.0lf\n",c);
	}
}