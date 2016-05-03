#include <stdio.h>

int main ()
{
	bool isSquare[103000];
	int i, start, fin,count;
	long num;

	freopen ("input.txt","r",stdin);

	for (i=1; i<320; i++)
	{
		num = i*i;
		isSquare[num] = 1;
	}

	while ((scanf ("%d %d",&start, &fin) == 2) && (start!=0 && fin !=0))
	{
		count = 0;
		for (i=start; i<=fin; i++)
		{
			if (isSquare[i] == 1)
				count++;
		}

		printf ("%d\n",count);
	}

	return 0;
}