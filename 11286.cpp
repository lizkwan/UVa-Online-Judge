#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int courses[5];
    while((scanf("%d", &n)) && (n != 0))
    {
        map<string, int> frosh;
        map<string, int>::const_iterator it;
        int max = 0;
        for (int i=0; i<n; i++)
        {
            scanf("%d %d %d %d %d", &courses[0], &courses[1], &courses[2], &courses[3], &courses[4]);
            sort(courses, courses+5);
            
            string str = "";
            for (int i=0; i<5; i++)
            {
                str += to_string(courses[i]);
            }
            
            it = frosh.find(str);
            if(it == frosh.end())
                frosh[str] = 1;
            else
                frosh[str]++;
            
            if (frosh[str] > max)
                max = frosh[str];
        }
        
        int result = 0;
        for (it = frosh.begin(); it != frosh.end(); it++)
        {
            if (it->second == max)
                result++;
        }

        if (result > 1)
            cout << result * max <<'\n';
        else
            cout << max << '\n';
    }
    return 0;
}
