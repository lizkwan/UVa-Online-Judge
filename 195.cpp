#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
void main ()
{
	int n,i,j,k,pos,len,count[52],next[100];
	char word[100],np[100],
		counta[52]= { 'A','a','B','b','C','c','D','d','E','e','F','f','G',
		'g','H','h','I','i','J','j','K','k','L','l','M','m','N','n','O','o','P','p','Q','q','R',
		'r','S','s','T','t','U','u','V','v','W','w','X','x','Y','y','Z','z' };

	scanf ("%d",&n);
	fflush(stdin);
	for (i=0; i<n; i++)
	{
		scanf ("%s",&word);
		len=strlen(word);
		for (j=0; j<52; j++)
			count[j]=0;

		// sort
		for (k=0; k<52; k++)
		{
			for (j=0; j<len; j++)
			{
				if (word[j]==counta[k])
					count[k]++;
			}
		}

		pos=0;
		for (j=0; j<52; j++)
		{
			for (k=0; k<count[j]; k++)
			{
				word[pos]=counta[j];
				pos++;
			}
		}
		word[pos]='\0';

		len=strlen(word);
		// diganti menjadi angka
		for (j=0; j<len; j++)
		{
			for (k=0; k<52; k++)
			{
				if (word[j]==counta[k])
					next[j]=k;
			}
		}

		printf ("%s\n",word);
		while (next_permutation(next,next+len))
		{
			for (j=0; j<len; j++)
			{
				k=next[j];
				np[j]=counta[k];
			}
			np[j]='\0';
			printf ("%s\n",np);
		}
	}
}