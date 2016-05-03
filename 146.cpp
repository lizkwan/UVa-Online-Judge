#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
void main ()
{
	char str[51],str2[51];
	int len;
	while (gets(str) && str[0]!='#')
	{
		strcpy(str2,str);
		len=strlen(str2);
		next_permutation(str2,str2+len);
		sort(str,str+len);
		if (strcmp(str,str2)==0)
			printf ("No Successor\n");
		else
			printf ("%s ans\n",str2);
		/*
		pos=0;
		masuk=0;
		len=strlen(str);
		for (i=len-1; i>0; i--)
		{
			if (str[i]>str[i-1])
			{
				pos=i-1;
				for (j=i,k=0; j<=len-1; j++,k++)
					str2[k]=str[j];
				str2[k]='\0';
				len2=strlen(str2);
				sort(str2,str2+len2);
				temp=str[pos];
				swap(str[pos],str2[0]);
				swap(str2[0],temp);
				sort(str2,str2+len2);
				for (j=i,k=0; j<=len-1; j++,k++)
					str[j]=str2[k];
				masuk=1;
				break;
			}
		}
		if (masuk==1)
			printf ("%s\n",str);
		else
			printf ("No Successor\n");
			*/
	}
}