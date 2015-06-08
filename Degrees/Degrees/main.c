//
//  main.c
//  Degrees
//
//  Created by Maemolee on 15/5/16.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

static float lastTemperatrue;

float fahrenheitFromCelsius(float cel)
{
    lastTemperatrue = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[]) {
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit\n", freezeInF);
    printf("Te last temperatrue converted was %f\n", lastTemperatrue);
    return EXIT_SUCCESS;  //其中EXIT_SUCCESS的值为0，是在头文件stdlib.h中定义的。
}
