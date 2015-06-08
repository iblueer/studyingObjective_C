//
//  main.c
//  Numbers
//
//  Created by Maemolee on 15/5/16.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    unsigned long int x = 255;
    printf("x is %lu.\n", x);
    printf("In octal, x is %lo.\n", x);
    printf("In hexadecimal, x is %lx.\n", x);
    
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
    printf("11 / 3 = %d remainder of %d\n", 11 / 3, 11 % 3);
    printf("11 / 3.0 = %f\n", 11 / (float)3);
    printf("The absolute value of -5 is %d\n", abs(-5));
    
    double y = 12345.6789;
    printf("y is %f\n", y);
    printf("y is %e\n", y);
    
    double angle = 1;
    double sine = sin(angle);
    printf("The sine of 1 rad is %.3f", sine);
    
    return 0;
}
