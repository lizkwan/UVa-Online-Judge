//
//  main.cpp
//  299
//
//  Created by Elizabeth on 6/18/16.
//  Copyright © 2016 Elizabeth. All rights reserved.
//

#include <stdio.h>

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int main() {
    int n, i, j, L, swapcount, flag, roof;
    int train[50];
    
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        
        // scan input
        scanf("%d", &L);
        for (j=0; j<L; j++) {
            scanf("%d", &train[j]);
        }
        
        // swap; bubble sort
        swapcount = 0;
        roof = L;
        do {
            flag = 0;
            for (j=1; j<=roof-1; j++) {
                if (train[j-1] > train[j]) {
                    swap(train[j-1], train[j]);
                    swapcount++;
                    flag = j;
                }
            }
            roof = flag;
        } while(roof != 0);
        
        // print
        printf("Optimal train swapping takes %d swaps.\n", swapcount);
        /*
        for (j=0; j<L; j++) {
            printf("%d ", train[j]);
        }
        printf("\nSwap:%d\n", swapcount);
        */
        
    }
    
    return 0;
}