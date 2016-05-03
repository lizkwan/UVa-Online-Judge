#include <stdio.h>
void main()
{
	// result = 859963392
	int i=1,j=2,result[1510],temp,ugly;
	result[0]=1;
	while (i<1500)
	{
		temp=j;
		ugly=1;
		while (ugly==1 && temp!=1)
		{
			if (temp%2==0)
				temp=temp/2;
			else if (temp%3==0)
				temp=temp/3;
			else if (temp%5==0)
				temp=temp/5;
			else
				ugly=0;

			/*
			for (k=i-1; k>0; k--)
			{
				if (temp==result[k])
					temp=1;
			}
			*/
			/*
			masuk=0;
			for (k=i; k>0; k--)
			{
				if (temp%result[k]==0)
				{
					temp=temp/result[k];
					masuk=1;
					break;
				}
			}

			if (masuk==0)
			{
				if (temp%2==0)
					temp=temp/2;
				else if (temp%3==0)
					temp=temp/3;
				else if (temp%5==0)
					temp=temp/5;
				else
					ugly=0;
			}
			*/
		}
		if (ugly==1)
		{
			result[i]=j;
			printf ("%d. %d\n",i,result[i]);
			i++;
		}
		j++;
	}
	printf ("The 1500'th ugly number is %d\n",result[1499]);
}

/*
	int i=1,j=0,k,l,result[1510],mul[3],masuk;
	result[0]=1;
	while (i<1500)
	{
		mul[0]=result[j]*2;
		mul[1]=result[j]*3;
		mul[2]=result[j]*5;

		for (k=0; k<3; k++)
		{
			masuk=0;
			for (l=0; (l<i && masuk==0); l++)
			{
				if (mul[k]==result[l])
					masuk=1;
			}
			if (masuk==0)
			{
				result[i]=mul[k];
				i++;
			}
		}
		sort(result,result+i);
		j++;
	}
	printf ("The 1500'th ugly number is %d\n",result[1499]);
	*/