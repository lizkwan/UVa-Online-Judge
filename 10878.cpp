#include <string>
#include <stdio.h>

int main ()
{
	char str[15];
	bool fin;
	int asciinum,tab[10],i;

	gets(str);
	fin = false;
	tab[1]=128;
	tab[2]=64;
	tab[3]=32;
	tab[4]=16;
	tab[5]=8;
	tab[7]=4;
	tab[8]=2;
	tab[9]=1;

	do
	{
		gets(str);
		asciinum = 0;
		if (strcmp(str,"___________")==0)
			fin = true;
		else
		{
			for (i=1; i<=9; i++)
			{
				if (i!=6)
				{
					if (str[i]=='o')
						asciinum = asciinum + tab[i];
				}
			}
			printf ("%c",asciinum);
		}
	} while (!fin);

	return 0;
}