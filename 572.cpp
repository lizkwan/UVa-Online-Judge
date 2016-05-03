#include <stdio.h>

int arr[110][110];
char data[110][110];

void checkneighbor(int i, int j, int num)
{
	int k,l;
	arr[i][j]=num;
	for (k=i-1; k<=i+1; k++)
	{
		if (k>=0)
		{
			for (l=j-1; l<=j+1; l++)
			{
				if (l>=0)
				{
					if (arr[k][l]==0)
					{
						if (data[k][l] == '@')
							checkneighbor(k,l,num);
					}
				}
			}
		}
	}
}

int main ()
{
	int m,n,i,j,k,l,count;

	while ((scanf("%d %d\n",&m, &n) == 2) && (m!=0))
	{
		for (i=0; i<m; i++)
		{
			for (j=0; j<n; j++)
			{
				scanf ("%c",&data[i][j]);
				arr[i][j] = 0;
			}
			scanf("\n");
		}

		count = 1;

		for (i=0; i<m; i++)
		{
			for (j=0; j<n; j++)
			{
				if (data[i][j]=='@')
				{
					if (arr[i][j] == 0)
					{
						//arr[i][j]=count;
						checkneighbor(i,j,count);
						count++;
					}
				}
			}
		}

		printf ("%d\n",count-1);
	}

	return 0;
}