#include <stdio.h>
#include <algorithm>
using namespace std;
void main ()
{
	int n[10005],i,j,pos,getpos,temp,nakhir,masuk;
	i=0;
	while (scanf("%d",&n[i])==1)
	{
		masuk=0;
		nakhir=n[i];
		for (j=0; j<i; j++)
		{
			if (n[i]<=n[j])
			{
				getpos=j;
				masuk=1;
				break;
			}
		}
		if (masuk==1)
		{
			for (j=i; j>getpos; j--)
				n[j]=n[j-1];
			n[j]=nakhir;
		}
		//sort(n,n+i+1);
		if (i%2==0) // jika ganjil
		{
			pos=i/2;
			printf ("%d\n",n[pos]);
		}
		else
		{
			pos=i/2;
			temp=(n[pos]+n[pos+1])/2;
			printf("%d\n",temp);
		}
		i++;
	}
}