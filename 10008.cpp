#include <stdio.h>
#include <string.h>
void main ()
{
	int n,i,j,k,len,count[26],max;
	char temp[10000],cmp,cmp2;
	while (scanf ("%d",&n)==1)
	{
		for (i=0; i<26; i++)
			count[i]=0;
		// menghitung jumlah
		for (i=0; i<=n; i++)
		{
			gets(temp);
			len=strlen(temp);
			//strupr(temp);
			for (j=0; j<len; j++)
			{
				for (k=0,cmp='A',cmp2='a'; k<26; k++,cmp++,cmp2++)
				{
					if (temp[j]==cmp || temp[j]==cmp2)
					{
						count[k]++;
						break;
					}
				}
			}
		}
		// print urut
		max=0;
		for (i=0; i<26; i++)
		{
			if (count[i]>max)
				max=count[i];
		}
		for (i=max; i>0; i--)
		{
			for (j=0,cmp='A'; j<26; j++,cmp++)
			{
				if (count[j]==i)
					printf ("%c %d\n",cmp,count[j]);
			}
		}
	}
}