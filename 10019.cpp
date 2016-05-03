#include <stdio.h>

int toBin (int num)
{
	int rem,i,count;
	i=0;
	count=0;
	while(num!=0)
	{
		rem=num%2;
		num=num/2;

		if (rem==1)
			count++;

		i++;
	}

	return count;
}

int main ()
{
	int n,m,i,b1,b2,div,rem;

	scanf ("%d",&n);

	for (i=0; i<n; i++)
	{
		scanf ("%d",&m);
		b1=toBin(m);

		b2=0;
		div=m;

		while (div > 0)
		{
			rem = div%10;
			div = div/10;
			b2 = b2 + toBin(rem);
		}

		printf ("%d %d\n",b1,b2);
	}

	return 0;
}