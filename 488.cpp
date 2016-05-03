#include <stdio.h>
void main ()
{
	//FILE *in=freopen("in.txt","r",stdin),*out=freopen("out.txt","w",stdout);
	int n,i,j,k,l,a,b;
	scanf ("%d",&n);
	for (i=0; i<n; i++)
	{
		scanf ("%d\n%d",&a,&b);
		if (i!=0)
			printf ("\n");
		for (j=0; j<b; j++)
		{
			for (k=1; k<a*2; k++)
			{
				if (k<=a)
				{
					for (l=1; l<=k; l++)
						printf ("%d",k);
				}
				else
				{
					for (l=1; l<=a-(k-a); l++)
						printf ("%d",a-(k-a));
				}
				printf ("\n");
			}
			if (j!=b-1)
				printf ("\n");
		}
	}
}