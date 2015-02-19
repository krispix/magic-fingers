//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 1/19/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//

#include <stdio.h>

void jolly(void) {
    printf("jolly good");
}

void deny(void) {
    printf("Which nobody can deny!");
}

int main(void) {
    printf("For he's a ");
    jolly();
    printf(" fellow!\n");
    
    printf("For he's a ");
    jolly();
    printf(" fellow!\n");
    
    printf("For he's a ");
    jolly();
    printf(" fellow!\n");

    deny();
    
    printf("\n\n");
    
    system("PAUSE");
    return 0;
}
