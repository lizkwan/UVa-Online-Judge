//
//  main.cpp
//  12015
//
//  Created by Elizabeth on 4/29/16.
//  Copyright © 2016 Elizabeth. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, max, result_count;
    char url[10][105];
    int rel[10], result[10];
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        max = 0;
        result_count = 0;
        for (j=0; j<10; j++)
        {
            scanf("%s %d", url[j], &rel[j]);
            if (rel[j] > max)
            {
                result_count = 1;
                result[0] = j;
                max = rel[j];
            }
            else if (rel[j] == max)
            {
                result[result_count] = j;
                result_count++;
            }
        }
        printf("Case #%d:\n", i+1);
        for (j=0; j<result_count; j++)
        {
            printf("%s\n", url[result[j]]);
        }
    }
    return 0;
}
