#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int in;
    
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d", &in) && (in != 0))
    {
        int total = 0;
        
        for (int i=1; i<in; i++)
        {
            if ((in % i) == 0)
                total += i;
        }
        
        printf("%5d  ", in);
        if (total == in)        printf("PERFECT\n");
        else if (total < in)    printf("DEFICIENT\n");
        else if (total > in)    printf("ABUNDANT\n");
    }
    printf("END OF OUTPUT\n");
    
    return 0;
}
