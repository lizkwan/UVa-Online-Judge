#include <stdio.h>
#include <string.h>

int main (int arcv, char** argc)
{
	//FILE *file=freopen("input.txt","r",stdin);
	char str[1000];
	int i,len;
	bool flag;
	flag=0;
	while(gets(str)!=NULL)
	{
		len=strlen(str);
		for (i=0; i<len; i++)
		{
			if (str[i]=='"')
			{
				if (flag==0)
				{
					printf ("``");
					flag=1;
				}
				else if (flag==1)
				{
					printf ("''");
					flag=0;
				}
			}
			else
				printf ("%c",str[i]);
		}
		printf ("\n");
	}
	return 0;
}