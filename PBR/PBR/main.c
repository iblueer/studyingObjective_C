//
//  main.c
//  PBR
//
//  Created by Maemolee on 15/5/26.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>
#include <math.h>


void cartesianToPolar(float x, float y, double *rPtr, double *thetaPtr)
{
    //rPtr是否为NULL？
    if(rPtr){
        //将radius存入传入函数的地址
        *rPtr = sqrt(x * x + y * y);
    }
    
    //thetaPtr是否为NULL？
    if(!thetaPtr){
        //跳过函数的剩余代码
        return;
    }
    
    //计算theta
    float theta;
    if(x == 0.0){
        if (y == 0.0) {
            theta = 0.0;//代表未定义
        }else if(y > 0){
            theta = M_PI_2;
        }else{
            theta = - M_PI_2;
        }
    }else{
        theta = atan(y/x);
    }
    //将theta存入传入函数的地址
    *thetaPtr = theta;
}

int main(int argc, const char * argv[]) {
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    
    //将integerPart的地址作为实参传入
    fractionPart = modf(pi, &integerPart);
    
    
    //获取integer地址上的值
    printf("integerPart = %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
    
    
    double x = 3.0;
    double y = 4.0;
    double radius;
    double angle;
    
    
    cartesianToPolar(x, y, &radius, &angle);
    printf("(%.2f, %.2f) becomes (%.2f radians, %.2f)\n", x, y, radius, angle);
    
    
    return 0;
}
