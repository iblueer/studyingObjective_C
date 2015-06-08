//
//  main.c
//  bufferAndHeap
//
//  Created by Maemolee on 15/6/8.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>//malloc和free都源自stdlib

int main(int argc, const char * argv[]) {
    //声明指针变量
    float *startOfBuffer;


    //从堆分配指定字节数的内存
    startOfBuffer = malloc(1000 * sizeof(float));


    //...使用缓冲区...

    
    //释放之前分配到的内存，使之能够被重新利用
    free(startOfBuffer);


    //将指针变量赋为空
    startOfBuffer = NULL;


    return 0;
}
