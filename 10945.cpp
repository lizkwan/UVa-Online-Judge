#include <stdio.h>
#include <string.h>
void main ()
{
	int len,i,l;
	char str1[1000], str2[1000],j,k;
	while (gets(str1))
	{
		if (strcmp (str1,"DONE")==0)
			break;
		len=strlen(str1);
		l=0;
		for (i=0; i<len; i++)
		{
			for (j='A',k='a'; j<='Z'; j++,k++)
			{
				if (str1[i]==j || str1[i]==k)
				{
					str2[l]=j;
					l++;
					j='Z';
				}
			}
		}
		str2[l]='\0';
		len=strlen(str2);
		for (i=len-1,l=0; i>=0; i--,l++)
			str1[l]=str2[i];
		str1[l]='\0';
		if (strcmp(str1,str2)==0)
			printf ("You won't be eaten!\n");
		else
			printf ("Uh oh..\n");
	}
}
