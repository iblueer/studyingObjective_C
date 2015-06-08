//
//  main.c
//  BMICalc
//
//  Created by Maemolee on 15/5/30.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>


//声明Person结构
typedef struct{
    float heightInMeters;
    int weightInKilos;
}Person;

float bodyMassIndex(Person p)
{
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}

int main(int argc, const char * argv[]) {
    Person person;
    person.weightInKilos = 96;
    person.heightInMeters = 1.8;
    printf("person weighs %i kilograms\n", person.weightInKilos);
    printf("person is %.2f meters tall\n", person.heightInMeters);
    float bmi = bodyMassIndex(person);
    printf("person has a BMI of %.2f\n", bmi);
    return 0;
}

//我了个大去这个程序在我约会之前看到简直是让我太开心了……我本人现在就是94kg，1.78m的状态，竟然还没到偏胖啊……好开心！