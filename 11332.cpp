//
//  main.cpp
//  11332
//
//  Created by Elizabeth on 6/18/16.
//  Copyright © 2016 Elizabeth. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str[11];
    int n, i, total;
    
    while(gets(str)) {
        if (!strcmp(str, "0")) {
            return 0;
        }
        
        while((n = (int) strlen(str)) > 1) {
            total = 0;
            for (i=0; i<n; i++) {
                total = total + (str[i] - 48);
            }
            sprintf(str, "%d", total);
        }
        
        printf("%s\n", str);
        
    }
    return 0;
}