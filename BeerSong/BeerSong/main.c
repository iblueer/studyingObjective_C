//
//  main.c
//  BeerSong
//
//  Created by Maemolee on 15/5/16.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>

void singTheSong(int numberOfBottles)
{
    if (numberOfBottles == 0) {
        printf("There are simply no more bottles of beer on the wall.\n");
    }else{
        printf("%d bottles of beer on the wall. %d bottles of beer.\n", numberOfBottles, numberOfBottles);
        int oneFewer = numberOfBottles -1;
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n", oneFewer);
        singTheSong(oneFewer); //函数调用自己，而且貌似就不再执行下一步的printf函数了。这是指在函数内跳转到另一个函数的进程？
        printf("Put a bottle in the recycling, %d empty bottles in the bin.\n", numberOfBottles);
    }
}

int main(int argc, const char * argv[]) {
    singTheSong(99);
    return 0;
}
