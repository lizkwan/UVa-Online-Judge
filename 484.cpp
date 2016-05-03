#include <stdio.h>
void main ()
{
	//freopen ("in.txt","r",stdin);
	int arr[100000],temp,len=0,count[100000],i,masuk;
	for (i=0; i<100000; i++)
		count[i]=0;
	while (scanf("%d ",&temp)==1)
	{
		masuk=0;
		for (i=0; i<len; i++)
		{
			if (temp==arr[i])
			{
				masuk=1;
				count[i]++;
			}
		}
		if (masuk==0 || len==0)
		{
			arr[len]=temp;
			count[len]++;
			len++;
		}
	}
	for (i=0; i<len; i++)
		printf ("%d %d\n",arr[i],count[i]);
}
