#include <stdio.h>
#include <string.h>
void main ()
{
	int len,pal,mir,i,j,k;
	char str[25],str2[25],str3[25],rev[35] = { 'A',' ',' ',' ','3',' ',' ','H','I','L',' ','J',
		'M',' ','O',' ',' ', ' ','2','T','U','V','W','X','Y','5','1','S','E',' ','Z',' ',' ','8',' ' }, 
		ch[35] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S',
	'T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9' };
	while (gets(str))
	{
		pal=0;
		mir=0;
		len=strlen(str);
		for (i=len-1,j=0; i>=0; i--,j++)
		{
			str2[i]=str[j];
			for (k=0; k<35; k++)
			{
				if (str[j]==ch[k])
				{
					str3[i]=rev[k];
					k=35;
				}
			}
		}
		str2[j]='\0';
		str3[j]='\0';
		if (strcmp(str,str2)==0) // cek palindrom
			pal=1;
		if (strcmp(str,str3)==0) // cek mirror
			mir=1;
		if (pal==1 && mir==1)
			printf ("%s -- is a mirrored palindrome.\n\n",str);
		else if (pal==1)
			printf ("%s -- is a regular palindrome.\n\n",str);
		else if (mir==1)
			printf ("%s -- is a mirrored string.\n\n",str);
		else
			printf ("%s -- is not a palindrome.\n\n",str);
	}
}