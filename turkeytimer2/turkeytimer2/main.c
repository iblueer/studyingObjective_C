//
//  main.c
//  turkeytimer2
//
//  Created by Maemolee on 15/5/16.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>

void showCookTimeForTurkey(int pounds)
{
    int necessaryMinutes = 15 + 15 * pounds;
    printf("Cook for %d minutes.\n", necessaryMinutes);
}

int main(int argc, const char * argv[]) {
    int totalWeight = 10;
    int gibletsWeight = 1;
    int turkeyWeight = totalWeight - gibletsWeight;
    showCookTimeForTurkey(turkeyWeight);
    
    return 0;
}
