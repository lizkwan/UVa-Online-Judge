#include <stdio.h>
#include <string.h>
bool isAlpha (char x)
{
	char i,j;
	for (i='A',j='a';i<='Z';i++,j++)
	{
		if (x==i || x==j)
			return true;
	}
	if (x=='*')
		return true;
	return false;
}
int isNum (char x)
{
	int j;
	char i;
	for (i='0',j=0; i<='9'; i++,j++)
	{
		if (x==i)
			return j;
	}
	return 28;
}
void main ()
{
	//FILE *in=freopen("in.txt","r",stdin),*out=freopen("out.txt","w",stdout);
	//freopen("in.txt","r",stdin);
	int num,len,i,j,temp,count=0;
	char str[150];
	bool cek;
	while (gets(str))
	{
		num=0;
		len=strlen(str);
		for (i=0; i<len; i++)
		{
			if (str[i]=='b')
			{
				for (j=0; j<num; j++)
					printf (" ");
				num=0;
			}
			else
			{
				cek=isAlpha(str[i]);
				if (cek==true)
				{
					for (j=0; j<num; j++)
						printf ("%c",str[i]);
					num=0;
				}
				else if (str[i]=='!')
					printf ("\n");
				else if (str[i]==0)
					printf ("\n");
				else
				{
					temp=isNum(str[i]);
					if (temp!=28)
						num=num+temp;
				}
			}
		}
		count=1;
		printf ("\n");
	}
}