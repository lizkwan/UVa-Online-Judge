#include <stdio.h>
#include <string.h>

int main ()
{
	int n,i,j,len,num,count;
	char str[1000];
	bool flag;

	scanf ("%d\n",&n);

	for (i=1; i<=n; i++)
	{
		printf ("Case #%d:\n",i);
		while ((gets(str)) && (str[0]!=0))
		{
			len = strlen(str);
			num = 0;
			count = 0;
			flag = 0;

			for (j=0; j<len; j++)
			{
				if (num == count && flag == 0 && str[j]!=' ')
				{
					printf ("%c",str[j]);
					num++;
					flag = 1;
				}

				count++;

				if (str[j]==' ')
				{
					count=0;
					flag = 0;
				}
			}
			printf ("\n");
		}
		if (i!=n)
			printf ("\n");
	}

	return 0;
}