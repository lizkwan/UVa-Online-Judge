#include <stdio.h>
#include <string.h>
bool isAlpha (char x)
{
	int i,j;
	for (i='A',j='a'; i<='Z'; i++,j++)
	{
		if (x==i || x==j)
			return true;
	}
	return false;
}
void main ()
{
	int len,i,first,count;
	char str[120000];
	bool cek;
	while (gets(str))
	{
		first=1;
		count=0;
		len=strlen(str);
		for (i=0; i<len; i++)
		{
			cek=isAlpha(str[i]);
			if (cek==true)
			{
				if (first==1)
				{
					first=0;
					count++;
				}
			}
			else
			{
				first=1;
			}
		}
		printf ("%d\n",count);
	}
}