#include <stdio.h>
#include <string.h>
void main ()
{
	int len,i,j,k,n,count;
	char str[110],str2[110];
	while (scanf ("%d %s",&n,str))
	{
		if (n==0)
			break;
		len=strlen(str);
		n=len/n;
		count=1;
		for (i=0; i<len; count++)
		{
			k=(count*n)-1;
			for (j=0; j<n; j++,k--)
			{
				str2[i]=str[k];
				i++;
			}
		}
		str2[i]='\0';
		printf ("%s\n",str2);
	}
}