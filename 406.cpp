#include <stdio.h>
bool isPrime (int n)
{
	int i;
	for (i=2; i<(n/2)+1; i++)
	{
		if (n%i==0)
			return false;
	}
	return true;
}
void main ()
{
	int C,N,primes[1005],prime[1005],count,c,i,j;
	bool cek;
	for (i=0; i<1005; i++)
		primes[i]=1;
	primes[0]=0;
	for (i=4; i<1005; i++)
	{
		// untuk yg belum d cek
		if (primes[i]==1)
		{
			if (i%2==0 || i%3==0) // kelipatan 2 & 3 tidak dihitung
				primes[i]=0;
			else
			{
				cek=isPrime(i);
				if (cek==true)
				{
					for (j=2;1005>=i*j ; j++)
						primes[i*j]=0;
				}
				else
					primes[i]=0;
			}
		}
	}

	while (scanf ("%d %d",&N,&C)==2)
	{
		for (i=0; i<1005; i++)
			prime[i]=0;
		count=0;
		printf ("%d %d:",N,C);
		for (i=0; i<=N; i++)
		{
			if (primes[i]==1)
			{
				prime[count]=i;
				count++;
			}
		}
		if (count%2==0) // genap
			c=C*2;
		else // ganjil
			c=(C*2)-1;

		count=count/2;
		i=count-(c/2);
		if (i<0)
		{
			for (j=0; (j<=(count*2) && prime[j]!=0); j++)
				printf (" %d",prime[j]);
			printf ("\n\n");
		}
		else
		{
			for (j=0;j<c; j++, i++)
				printf (" %d",prime[i]);
			printf ("\n\n");
		}
	}
}