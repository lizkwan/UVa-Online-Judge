#include <stdio.h>n
#include <stack>
#include <string>

using namespace std;

int main()
{
	stack <int> rows, cols;
	int r[100], c[100], n, i, len,total;
	char str[100], dummy[100], name;
	bool ferr;

	freopen ("input.txt","r",stdin);

	//scanf ("%d\n",&n);
	gets(str);
	sscanf(str,"%d\n",&n);
	for (i=0; i<n; i++)
	{
		gets(str);
		sscanf (str,"%c %s",&name, &dummy);
		sscanf (str,"%s %d %d",&dummy, &r[name], &c[name]);
	}

	while (gets(str))
	{
		len = strlen(str);
		ferr = false;
		total = 0;
		for (i=0; i<len; i++)
		{
			if (str[i] == ')')
			{
				int r1,c1,r2,c2,rhasil,chasil;
				r2 = rows.top();
				rows.pop();

				r1 = rows.top();
				rows.pop();

				c2 = cols.top();
				cols.pop();

				c1 = cols.top();
				cols.pop();

				if ( c1==r2 )
				{
					rhasil = r1;
					chasil = c2;
					total = total + (rhasil * chasil * c1);
					rows.push(rhasil);
					cols.push(chasil);
				}
				else
				{
					ferr = true;
					i = len;
				}
			}
			else if (str[i] != '(')
			{
				rows.push(r[str[i]]);
				cols.push(c[str[i]]);
			}
		}
		if (ferr)
			printf ("error\n");
		else		
			printf ("%d\n",total);
	}

	return 0;
}