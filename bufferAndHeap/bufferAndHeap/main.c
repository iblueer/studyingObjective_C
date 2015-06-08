//
//  main.c
//  bufferAndHeap
//
//  Created by Maemolee on 15/6/8.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>


//声明Person结构
typedef struct{
    float heightInMeters;
    int weightInKilos;
}Person;

float bodyMassIndex(Person *p)
{
    return p->weightInKilos / (p->heightInMeters * p->heightInMeters);
}

int main(int argc, const char * argv[]) {
    //为一个person结构分配内存
    Person *x = (Person *)malloc(Person);


    //为该结构的两个成员变量赋值
    x->weightInKilos = 96;
    x->heightInMeters = 1.8;


    //计算并输出BMI
    float xBMI = bodyMassIndex(x);
    printf("x has a BMI of %f\n", xBMI);


    //释放占用的内存，使之能够被重用
    free(x);


    //将指针变量赋为空
    x = NULL;
    return 0;
}
