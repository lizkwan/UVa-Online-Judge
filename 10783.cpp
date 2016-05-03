#include <stdio.h>
void main ()
{
	int i,j,n,a,b,temp,hasil;
	scanf ("%d",&n);
	for (i=0; i<n; i++)
	{
		hasil=0;
		scanf ("%d\n%d",&a,&b);
		if (b<a)
		{
			temp=b;
			b=a;
			a=temp;
		}
		if (a%2==0)
			a++;
		for (j=a; j<=b; j+=2)
			hasil=hasil+j;
		printf ("Case %d: %d\n",i+1,hasil);
	}
}