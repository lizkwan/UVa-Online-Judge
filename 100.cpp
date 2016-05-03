#include <stdio.h>
void main ()
{
	int a,b,i,j,n,count,max;
	while (scanf("%d %d",&i,&j)==2)
	{
		max=0;
		if (i<=j)
		{
			a=i;
			b=j;
		}
		else
		{
			a=j;
			b=i;
		}
		for (; a<=b; a++)
		{
			count=1;
			n=a;
			while (n!=1)
			{
				if (n%2!=0)
					n=(3*n)+1;
				else
					n=n/2;
				count++;
			}
			if (count>=max)
				max=count;
		}
		printf ("%d %d %d\n",i,j,max);
	}
}