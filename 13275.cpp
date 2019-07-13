#include <iostream>
#include <cstdio>

using namespace std;

bool  isLeapYear(int  year)
{
    if (year %  400  ==  0)  return  true;
    else  if(year  %  100  ==  0)  return  false;
    else  if(year  %  4  ==  0)  return  true;
    else  return  false;
}

int main(int argc, const char * argv[]) {
    int n;
    int d, m, y, qy;
    
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d %d %d %d", &d, &m, &y, &qy);
        
        int total = 0;
        if ((d==29) && (m==2))
        {
            for (int j=y+1; j<=qy; j++)
            {
                if (isLeapYear(j))
                {
                    total++;
                    j+=3;
                }
            }
        }
        else
        {
            total = qy-y;
        }
        
        cout << "Case " << i+1 << ": " << total << '\n';
    }
    
    return 0;
}
