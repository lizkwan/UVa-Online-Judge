#include <stdio.h>

int main ()
{
	int n, count, total, avg, mindist, min, max, temp, i, j;

	freopen ("input.txt","r",stdin);

	scanf ("%d",&n);
	for (i=0; i<n; i++)
	{
		scanf ("%d",&count);
		total = 0;
		for (j=0; j<count; j++)
		{
			scanf ("%d",&temp);

			if (j==0)
			{
				min = temp;
				max = temp;
			}
			else
			{
				if (temp < min)
					min = temp;
				else if (temp > max)
					max = temp;
			}

			total = total + temp;
		}
		avg = total / count;
		mindist = ((avg - min) * 2) + ((max - avg) * 2);
		printf ("%d\n",mindist);
		/*
		if (i != (n-1))
			printf ("\n");
			*/
	}

	return 0;
}