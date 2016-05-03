#include <stdio.h>
#include <string.h>
void main ()
{
	int n,i,j,k,len1,len2,len,masuk;
	char str1[1000],str2[1000],result[1000];
	scanf ("%d",&n);
	for (i=0; i<n; i++)
	{
		for (j=0; j<1000; j++)
			result[j]='0';
		scanf ("%s",&str1);
		scanf ("%s",&str2);
		len1=strlen(str1);
		len2=strlen(str2);
		if (len1>len2)
		{
			for (j=len1-len2,k=len2; j>0; j--,k++)
				str2[k]='0';
			len=len1;
		}
		else if (len2>len1)
		{
			for (j=len2-len1,k=len1; j>0; j--,k++)
				str1[k]='0';
			len=len2;
		}
		else
			len=len1;
		for (j=0; j<len; j++)
		{
			result[j]=result[j]-48;
			str1[j]=str1[j]-48;
			str2[j]=str2[j]-48;
			result[j]=result[j]+str1[j]+str2[j];
			if (result[j]>9)
			{
				result[j]=result[j]-10;
				result[j+1]++;
			}
			result[j]=result[j]+48;
		}
		for (j=0; j<=len; j++)
		{
			if (result[j]!='0')
				break;
		}
		for ( ; j<=len; j++)
		{
			if (j==len)
			{
				if (result[j]!='0')
					printf ("%c",result[j]);
			}
			else
			{
				if (result[j]=='0')
				{
					masuk=0;
					for (k=j+1; k<1000; k++)
					{
						if (result[k]!='0')
						{
							k=1000;
							masuk=1;
						}
					}
					if (masuk==1)
						printf ("%c",result[j]);
				}
				else
					printf ("%c",result[j]);
			}
		}
		printf ("\n");
	}
}