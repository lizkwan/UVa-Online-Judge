#include <stdio.h>
#include <string.h>
void main ()
{
	int len,i,j,start,end,masuk;
	char str[1000];
	while (gets(str))
	{
		start=0;
		end=0;
		masuk=0;
		len=strlen(str);
		for (i=0; i<len; i++)
		{
			if (str[i]!=' ' && masuk==0)
			{
				start=i;
				masuk=1;
			}
			else if (str[i]==' ')
			{
				end=i;
				for (j=end-1; j>=start; j--)
					printf ("%c",str[j]);
				masuk=0;
				start=end+1;
				printf (" ");
			}
		}
		for (j=len-1; j>=start; j--)
			printf ("%c",str[j]);
		printf ("\n");
	}
}