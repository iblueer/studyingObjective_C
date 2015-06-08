//
//  main.c
//  Coolness
//
//  Created by Maemolee on 15/5/16.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0;
    while (i < 12){
        printf("%d. Aaron is cool\n", i); //卧槽这个句子不科学！为什么前边要加上行号啊！
        i++;
    }
    
    printf("\n");
    
    for (i = 0; i < 12; i++) {
        printf("%d. Aaron is cool\n", i);
    }
    
    printf("\n");
    
    i = 0;
    do{
        printf("%d. Aaron is cool\n", i);
        i++;
    }while (i < 13);
    
    return 0;
}
