#include <stdio.h>
#include <string.h>
void main ()
{
	int i,j,k,bin[3][3],hasil,min,count;
	char minchar[3],tipe[4],comb[6][4]=
	{
		'B','C','G','\0',
		'B','G','C','\0',
		'C','B','G','\0',
		'C','G','B','\0',
		'G','B','C','\0',
		'G','C','B','\0'
	};
	while (scanf("%d %d %d %d %d %d %d %d %d",&bin[0][0],&bin[0][1],&bin[0][2],&bin[1][0],&bin[1][1],&bin[1][2],&bin[2][0],&bin[2][1],&bin[2][2])==9)
	{
		min=0;
		count=0;
		while (count<6)
		{
			hasil=0;
			strcpy (tipe,comb[count]);
			for (i=0; i<3; i++)
			{
				switch (tipe[i])
				{
				case 'B': 
				case 'G': 
				case 'C': 
					for (j=0; j<3; j++)
					{
						if (j!=i)
						{
							switch (tipe[i])
							{
							case 'B': k=0; break;
							case 'G': k=1; break;
							case 'C': k=2; break;
							}
							hasil=hasil+bin[j][k];
						}
					}
					break;
				}
			}
			if (hasil<min || count==0)
			{
				min=hasil;
				strcpy (minchar,tipe);
			}
			count++;
		}
		printf ("%s %d\n",minchar,min);
	}
}