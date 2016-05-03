#include <stdio.h>
#include <string.h>
bool isVowels (char x)
{
	int i;
	char vowels[10] = { 'A','a','E','e','I','i','O','o','U','u' };
	for (i=0; i<10; i++)
	{
		if (x==vowels[i])
			return true;
	}
	return false;

}
bool isConsonant (char x)
{
	int i;
	char cons[42] = { 'B','b','C','c','D','d','F','f','G','g','H','h','J','j','K','k','L','l','M',
		'm','N','n','P','p','Q','q','R','r','S','s','T','t','V','v','W','w','X','x','Y','y','Z',
		'z' };
	for (i=0; i<42; i++)
	{
		if (x==cons[i])
			return true;
	}
	return false;
}
void main ()
{
	int len,i,first,vow,cons,count;
	char str[1200000],str2[1200000],kar1;
	bool cek;
	while (gets(str))
	{
		count=0;
		vow=0;
		cons=0;
		first=1;
		len=strlen(str);
		for (i=0; i<len; i++)
		{
			cek=isVowels(str[i]);
			if (cek==false)
			{
				cek=isConsonant(str[i]);
				if (cek==false) 
				{
					if (vow==1)
					{
						str2[count]='a';
						str2[count+1]='y';
						str2[count+2]=str[i];
						count=count+3;
					}
					else if (cons==1)
					{
						str2[count]=kar1;
						str2[count+1]='a';
						str2[count+2]='y';
						str2[count+3]=str[i];
						count=count+4;;
					}
					else
					{
						str2[count]=str[i];
						count++;
					}
					first=1;
					vow=0;
					cons=0;
				}
				else 
				{
					if (first==1)
					{
						kar1=str[i];
						cons=1;
					}
					else
					{
						str2[count]=str[i];
						count++;
					}
					first=0;
				}
			}
			else
			{
				if (first==1)
					vow=1;
				str2[count]=str[i];
				count++;
				first=0;
			}
		}
		if (vow==1)
		{
			str2[count]='a';
			str2[count+1]='y';
			str2[count+2]=str[i];
			count=count+3;
		}
		else if (cons==1)
		{
			str2[count]=kar1;
			str2[count+1]='a';
			str2[count+2]='y';
			str2[count+3]=str[i];
			count=count+4;;
		}
		else
		{
			str2[count]=str[i];
			count++;
		}
		str2[count]='\0';
		printf ("%s\n",str2);
	}
}