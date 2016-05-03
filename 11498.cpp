#include <stdio.h>

struct point {
	int x;
	int y;
};

int main ()
{
	point divp,pts;
	int n,i;

	freopen("input.txt","r",stdin);

	while (scanf("%d",&n) && (n!=0))
	{
		scanf("%d %d",&divp.x,&divp.y);
		for (i=0; i<n; i++)
		{
			scanf("%d %d",&pts.x,&pts.y);
			if ((pts.x == divp.x) || (pts.y == divp.y))
				puts("divisa");
			else if ((pts.x < divp.x) && (pts.y > divp.y))
				puts("NO");
			else if ((pts.x > divp.x) && (pts.y > divp.y))
				puts("NE");
			else if ((pts.x > divp.x) && (pts.y < divp.y))
				puts("SE");
			else if ((pts.x < divp.x) && (pts.y < divp.y))
				puts("SO");
		}
	}
	return 0;
}