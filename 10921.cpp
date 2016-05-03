#include <stdio.h>
#include <string.h>

int main ()
{
	int i,len;
	char str[35],kar[256];

	kar['A'] = '2';
	kar['B'] = '2';
	kar['C'] = '2';
	kar['D'] = '3';
	kar['E'] = '3';
	kar['F'] = '3';
	kar['G'] = '4';
	kar['H'] = '4';
	kar['I'] = '4';
	kar['J'] = '5';
	kar['K'] = '5';
	kar['L'] = '5';
	kar['M'] = '6';
	kar['N'] = '6';
	kar['O'] = '6';
	kar['P'] = '7';
	kar['Q'] = '7';
	kar['R'] = '7';
	kar['S'] = '7';
	kar['T'] = '8';
	kar['U'] = '8';
	kar['V'] = '8';
	kar['W'] = '9';
	kar['X'] = '9';
	kar['Y'] = '9';
	kar['Z'] = '9';


	while (gets(str))
	{
		len = strlen(str);
		for (i=0; i<len; i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				printf ("%c",kar[str[i]]);
			else
				printf ("%c",str[i]);
		}
		printf ("\n");
	}
	return 0;
}