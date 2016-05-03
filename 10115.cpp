#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	string str, searchString[15], replaceString[15];
	int n,i,j;

	while ((scanf ("%d\n",&n)==1) && (n!=0))
	{
		for (i=0; i<n; i++)
		{
			getline(cin,searchString[i],'\n');
			getline(cin,replaceString[i],'\n');
		}
		
		getline(cin,str,'\n');
		
		for (i=0; i<n; i++)
		{
			string::size_type j = 0;
			string::size_type pos = 0;
			for ( ;  j<str.size(); )
			{
				pos = j;
				if ( (pos = str.find(searchString[i], pos)) != string::npos ) 
					str.replace( pos, searchString[i].size(), replaceString[i] );
				else
					j++;
			}
		}
		
		cout << str << endl;
	}

    return 0;
}