#include <stdio.h>
#include <conio.h>

int main()
{
	int i,j,k,temp,count,T[105][105],a,b,max,sum,pair,casenum;
	float avg;
	bool flag;

	count = 0;
	casenum = 0;
	flag = true;

	do 
	{
		if (flag)
		{
			for (i=0; i<105; i++)
			{
				for (j=0; j<105; j++)
					T[i][j] = 9999;
			}
			flag = false;
			max = 0;
		}

		scanf ("%d %d",&a,&b);

		if (a==0 && b==0)
		{
			count++;
			casenum++;
		}
		else
		{
			if (a>max)
				max = a;
			else if (b>max)
				max = b;
			T[a][b]=1;
			count = 0;
		}

		if (count == 1)
		{
			for (k=1; k<=max; k++)
			{
				for (i=1; i<=max; i++)
				{
					for (j=1; j<=max; j++)
					{
						if (i!=j)
						{
							temp=T[i][k]+T[k][j];
							if (temp< T[i][j])
								T[i][j]=temp;
						}
					}
				}
			}

			sum = 0;
			pair = 0;
			for (i=1; i<=max; i++)
			{
				for (j=1; j<=max; j++)
				{
					if (T[i][j]<9999)
					{
						sum = sum + T[i][j];
						pair++;
					}
				}
			}

			avg = (float) sum / pair;
			printf ("Case %d: average length between pages = %.3f clicks\n",casenum,avg);
			
			flag = true;
		}

	} while (count<2);

	return 0;
}