#include <stdio.h>
void main ()
{
	unsigned long int L,H,temp,i,n,maxnum,count,max;
	while (scanf ("%ld %ld",&L,&H)==2 && (L!=0 || H!=0))
	{
		max=0;
		maxnum=0;
		if (L>H)
		{
			temp=L;
			L=H;
			H=temp;
		}
		for (i=L; i<=H; i++)
		{
			count=0;
			n=i;
			do
			{
				if (n%2!=0) // ganjil
					n=(3*n)+1;
				else
					n=n/2;
				count++;
			} while (n!=1);
			if (count>max)
			{
				max=count;
				maxnum=i;
			}
		}
		printf ("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",L,H,maxnum,max);
	}
}