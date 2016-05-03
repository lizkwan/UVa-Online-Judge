#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,j,kar[256],len,count;
	char temp[110];

	//freopen("input.txt","r",stdin);
	kar[32]=1; // spasi
	kar[97]=1; // a
	kar[98]=2; // b
	kar[99]=3; // c
	kar[100]=1; // d
	kar[101]=2; // e
	kar[102]=3; // f
	kar[103]=1; // g
	kar[104]=2; // h
	kar[105]=3; // i
	kar[106]=1; // j
	kar[107]=2; // k
	kar[108]=3; // l
	kar[109]=1; // m
	kar[110]=2; // n
	kar[111]=3; // o
	kar[112]=1; // p
	kar[113]=2; // q
	kar[114]=3; // r
	kar[115]=4; // s
	kar[116]=1; // t
	kar[117]=2; // u
	kar[118]=3; // v
	kar[119]=1; // w
	kar[120]=2; // x
	kar[121]=3; // y
	kar[122]=4; // z

	scanf ("%d",&n);
	gets(temp);
	for (i=1; i<=n; i++)
	{
		count=0;
		gets(temp);
		//puts(temp);
		len = strlen(temp);

		for (j=0; j<len; j++) {
			count = count + kar[temp[j]];
		}
		printf ("Case #%d: %d\n",i,count);
	}
	return 0;
}