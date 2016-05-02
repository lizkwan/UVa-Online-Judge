//
//  main.cpp
//  12696
//
//  Created by Elizabeth on 4/29/16.
//  Copyright © 2016 Elizabeth. All rights reserved.
//

#include <stdio.h>

int main() {
    int n, i, count = 0;
    float length, width, depth, weight;
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%f %f %f %f", &length, &width, &depth, &weight);

        if ((((length <= 56) && (width <= 45) && (depth <= 25)) || ((length+width+depth) <= 125)) && (weight <= 7))
        {
            printf("1\n");
            count++;
        }
        else
            printf("0\n");
    }
    printf("%d\n", count);
    return 0;
}