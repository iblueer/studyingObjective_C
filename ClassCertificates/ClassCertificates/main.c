//
//  main.c
//  ClassCertificates
//
//  Created by Maemolee on 15/5/15.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#include <stdio.h>

void congratulateStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days.\n", student, course, numDays);
}

int main(int argc, const char * argv[]) {
    congratulateStudent("Mark","Cocoa", 5);
    congratulateStudent("Bo", "Objecive-C", 2);
    congratulateStudent("Mike", "Python", 5);
    congratulateStudent("Ted", "iOS", 5);
    
    return 0;
}
