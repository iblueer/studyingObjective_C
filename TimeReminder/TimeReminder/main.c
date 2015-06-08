//
//  main.c
//  TimeReminder
//
//  Created by Maemolee on 15/6/3.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    long secondsSince1970 = 400000; //time(NULL);
    
    printf("It has been %ld seconds since 1970\n", secondsSince1970);
    
    struct tm now;
    localtime_r(&secondsSince1970, &now);
    //printf("The time is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
    printf("The date is %d-%d-%d\n", (now.tm_mon + 1), now.tm_mday, now.tm_year);   //这一行里面的日期我想输出05怎么输出？
    
    return 0;
}
