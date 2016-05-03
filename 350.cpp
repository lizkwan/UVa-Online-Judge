#include <stdio.h>
void main ()
{
	int Z,I,M,L,next,count,num=0,ncount[10000],i;
	while (scanf ("%d %d %d %d",&Z,&I,&M,&L)==4 &&  (Z!=0 || I!=0 || M!=0 || L!=0))
	{
		num++;
		next=L;
		count=0;
		for (i=0; i<M; i++)
			ncount[i]=0;
		do
		{
			next=((Z%M)*(next%M)+(I%M))%M;
			if (ncount[next]>0)
				break;
			ncount[next]=1;
			count++;
			//printf ("%d\n",count);
		} while (true);
		printf ("Case %d: %d\n",num,count);
	}
}