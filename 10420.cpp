#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

bool stringCompare( const string &left, const string &right ){
   for( string::const_iterator lit = left.begin(), rit = right.begin(); lit != left.end() && rit != right.end(); ++lit, ++rit )
      if( tolower( *lit ) < tolower( *rit ) )
         return true;
      else if( tolower( *lit ) > tolower( *rit ) )
         return false;
   if( left.size() < right.size() )
      return true;
   return false;
}

int main()
{
	int n,i,count;
	vector<string> vec;
	string str;
	const char *temp;
	char country[100],country2[100],dummy[100];

	scanf ("%d\n",&n);
	for (i=0; i<n; i++)
	{
		getline(cin,str,'\n');
		vec.push_back(str);
	}
	
	sort(vec.begin(), vec.end(), stringCompare);

	count = 0;
	for (i=0; i<n-1; i++)
	{
		temp = vec[i].c_str();
		sscanf(temp,"%s %s",country,dummy);

		temp = vec[i+1].c_str();
		sscanf(temp,"%s %s",country2,dummy);

		count++;
		if (strcmp(country,country2)!=0)
		{
			cout << country << " " << count << endl;
			count = 0;
		}
		//cout << country << endl;
	}

	if (count == 0)
		cout << country2 << " 1" << endl;
	else
	{
		count++;
		cout << country << " " << count << endl;
	}

	return 0;
}
