#include <stdio.h>
void main()
{
	int i,l,h,r,max[20000],mostR,mostL,count,temp;
	for (i=0; i<20000; i++)
		max[i]=0;
	mostR=0;
	count=0;
	while (scanf ("%d %d %d",&l,&h,&r)==3)
	{
		if (count==0)
		{
			mostL=l; 
			count=1;
		}
		for (i=l; i<r; i++)
		{
			if (h>max[i])
				max[i]=h;
		}
		if (r>mostR)
			mostR=r;
	}
	temp=max[mostL];
	printf ("%d %d",mostL,temp);
	for (i=mostL; i<=mostR+1; i++)
	{
		if (temp!=max[i])
		{			
			printf (" %d %d",i,max[i]);			
			temp=max[i];
		}
	}
	printf ("\n");
}