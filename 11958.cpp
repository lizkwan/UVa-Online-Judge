//
//  main.cpp
//  11958
//
//  Created by Elizabeth on 6/18/16.
//  Copyright © 2016 Elizabeth. All rights reserved.
//

#include <stdio.h>

int main() {
    int n, i, j, numbus;
    int hh, mm, currenttime, min, temp;
    int bushh, busmm, bustravel, busInMin;
    char dummy;
    
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        scanf("%d", &numbus);
        scanf("%d%c%d", &hh, &dummy, &mm);
        currenttime = (hh*60)+mm;
        min = 99999;
        
        for (j=0; j<numbus; j++) {
            scanf("%d%c%d%c%d", &bushh, &dummy, &busmm, &dummy, &bustravel);
            busInMin = (bushh*60)+busmm;
            if (busInMin >= currenttime) {
                temp = (busInMin-currenttime)+bustravel;
            }
            else {
                temp = ((1440+busInMin)-currenttime)+bustravel;
            }
            
            if (temp < min)
                min = temp;
        }
        
        printf("Case %d: %d\n", i+1, min);
    }
    return 0;
}