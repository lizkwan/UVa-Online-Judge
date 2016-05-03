#include <stdio.h>
#include <string.h>
void main ()
{
	int len,i,j;
	char in[110],result[110];
	for (i=0; i<110; i++)
	{
		result[i]='0';
		in[i]='0';
	}
	while (gets(in))
	{
		if (in[0]=='0')
			break;
		len=strlen(in);
		// buat rata kanan
		for (i=len-1,j=109; i>=0; i--,j--)
			in[j]=in[i];
		for ( ; j>=0; j-- )
			in[j]='0';
		// dikurangi 48
		for (i=109; i>=0; i--)
		{
			in[i]=in[i]-48;
			result[i]=result[i]-48;
			result[i]=result[i]+in[i];
			if (i!=0 && result[i]>9)
			{
				result[i]=result[i]-10;
				result[i-1]++;
			}
			result[i]=result[i]+48;
		}
	}
	for (i=0; i<110; i++)
	{
		if (result[i]!='0')
			break;
	}
	for ( ; i<110; i++)
		printf ("%c",result[i]);
	printf ("\n");
}