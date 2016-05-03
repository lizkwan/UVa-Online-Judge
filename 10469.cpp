#include <stdio.h>

void toBin (int dec, int bin[])
{
	int rem,i;
	i=0;
	do
	{
		rem = dec % 2;
		dec = dec / 2;
		bin[i] = rem;
		i++;
	} while (dec != 0);

	for (; i<32; i++)
		bin[i] = 0;
}

void toDec (int &dec, int bin[])
{
	int i, num;

	dec = 0;
	num = 1;

	for (i=0; i<32; i++)
	{
		dec=dec+bin[i]*num;
		num=num*2;
	}
}

int main ()
{
	int intoper1, intoper2, intres, bin1[32], bin2[32], res[32], i;

	freopen ("input.txt","r",stdin);

	while (scanf ("%d %d",&intoper1, &intoper2) == 2)
	{
		toBin(intoper1,bin1);
		toBin(intoper2,bin2);

		for (i=0; i<32; i++)
		{
			res[i] = bin1[i] + bin2[i];
			if (res[i] > 1)
				res[i] = 0;
		}

		toDec (intres,res);

		printf ("%d\n",intres);
	}


	return 0;
}