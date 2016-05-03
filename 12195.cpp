//
//  main.cpp
//  12195
//
//  Created by Elizabeth on 5/2/16.
//  Copyright © 2016 Elizabeth. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char in[205];
    while(gets(in))
    {
        if (strcmp(in, "*") == 0)
            return 0;
        int len = (int) strlen(in);
        int correct = 0;
        float count = 0;
        for (int i=1; i<len; i++)
        {
            switch(in[i])
            {
                case 'W': count += 1; break;
                case 'H': count += 0.5; break;
                case 'Q': count += 0.25; break;
                case 'E': count += 0.125; break;
                case 'S': count += 0.0625; break;
                case 'T': count += 0.03125; break;
                case 'X': count +=0.015625; break;
                case '/':
                    if (count == 1.0)
                        correct++;
                    count = 0;
                    break;
            }
        }
        printf("%d\n", correct);
    }
    return 0;
}
