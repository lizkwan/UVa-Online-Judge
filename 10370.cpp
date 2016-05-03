#include <stdio.h>

int main ()
{
	int n,i,j;
	char sign;
	double p,avg,grade[1000],count,total,num;

	sign='%';

	scanf ("%d",&n);
	for (i=0; i<n; i++)
	{
		total = 0;
		scanf("%lf",&count);
		for (j=0; j<count; j++)
		{
			scanf ("%lf",&grade[j]);
			total = total + grade[j];
		}
		avg = total/count;
		num = 0;
		for (j=0; j<count; j++)
		{
			if (grade[j] > avg)
				num++;
		}
		p = (num/count)*100;
		printf ("%.3lf%c\n",p,sign);
	}

	return 0;
}