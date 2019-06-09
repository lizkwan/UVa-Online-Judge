#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    string line;
    while (getline(cin, line))
    {
        if (line == ".")
            break;
        int len = line.length();
        bool found = 0;
        for (int i=1; i<=len/2; i++)
        {
            if (len%i == 0)
            {
                int j=0;
                string pattern = line.substr(j,i);
                int count = 1;
                for (j = j+i; j<=len-i; j=j+i)
                {
                    string compareto = line.substr(j,i);
                    if (pattern != compareto)
                        break;
                    count++;
                }
                if (j == len)
                {
                    cout << count << endl;
                    found = 1;
                    break;
                }
            }
        }
        if (!found)
            cout << 1 << endl;
    }
    return 0;
}
