#include <stdio.h>

int main ()
{
	int T,B,N,E,S,W,count,i,temp;
	char str[6];

	while ((scanf("%d",&count)==1) && (count!=0))
	{
		T=1;
		B=6;
		N=2;
		S=5;
		W=3;
		E=4;

		gets(str);

		for (i=0; i<count; i++)
		{
			gets(str);
			switch (str[0])
			{
			case 'n':
			case 'N':
				temp = T;
				T = S;
				S = B;
				B = N;
				N = temp;
				break;
			case 's':
			case 'S':
				temp = T;
				T = N;
				N = B;
				B = S;
				S = temp;
				break;
			case 'e':
			case 'E':
				temp = T;
				T = W;
				W = B;
				B = E;
				E = temp;
				break;
			case 'w':
			case 'W':
				temp = T;
				T = E;
				E = B;
				B = W;
				W = temp;
				break;
			}
		}
		printf ("%d\n",T);
	}
	return 0;
}