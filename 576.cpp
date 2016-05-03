#include <stdio.h>
#include <string.h>

int main (int argv, char **argc)
{
	char str[250];
	int i,j,len,count[3],flag;

	while (gets(str)  && strcmp(str,"e/o/i"))
	{
		len=strlen(str);
		for (i=0; i<3; i++)
			count[i]=0;
		flag=0;

		for (i=0,j=0; i<len; i++)
		{
			if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')
			{
				count[j]++;
				while (str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u' || str[i+1]=='y')
					i++;
			}
			if (str[i+1]=='/')
			{
				if ((j==0) && (count[j]!=5))
					flag=1;
				else if (j==1)
				{
					if (count[j]!=7)
					{
						if (flag==1)
							flag=2;
						else
						{
							printf ("2\n");
							i=len;
							flag=-1;
						}
					}
					else
					{
						if (flag==1)
						{
							printf ("1\n");
							i=len;
							flag=-1;
						}
					}
				}
				i++;
				j++;
			}
		}
		if (flag!=-1 && len>0)
		{
			if (count[2]!=5)
			{
				if (flag==0)
					printf ("3\n");
				else if (flag<=2)
					printf ("1\n");
			}
			else
			{
				if (flag==0)
					printf ("Y\n");
				else if (flag<=2)
					printf ("1\n");
			}
		}
	}
	return 0;
}