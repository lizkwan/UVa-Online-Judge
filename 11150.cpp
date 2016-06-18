//
//  main.cpp
//  11150
//
//  Created by Elizabeth on 6/18/16.
//  Copyright © 2016 Elizabeth. All rights reserved.
//

#include <stdio.h>

int main() {
    int n, result;
    
    while(scanf("%d", &n) == 1) {
        result = n + (n/2);
        printf("%d\n", result);
    }
    
    return 0;
}