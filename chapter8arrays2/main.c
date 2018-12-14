//
//  main.c
//  chapter8arrays2
//
//  Created by Nicholas Morris on 13/12/18.
//  Copyright © 2018 Nicholas Morris. All rights reserved.
//

#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

#define N 100

int main(int argc, const char * argv[]) {
    
    
    //Initialize
    char message[N] = {' '};
    char ch;
    int i = 0, j = 0, k= 0;
    
    
    //Prompt user for message
    printf("Enter a message: ");
    //Get message and put each character into an array
    while((ch = getchar()) != '\n'){
        ch = toupper(ch);
        message[i] = ch;
        i++;
    }
  //Print the B1ff speak converting characters
    printf("In B1FF-speak: ");
    for(k = 0; k<i; k++){
        switch(message[k]){
            case 's':
                printf("5");
                break;
            case 'O':
                printf("0");
                break;
            case 'I':
                printf("1");
                break;
            case 'E':
                printf("3");
                break;
            case 'B':
                printf("8");
                break;
            case 'A':
                printf("4");
                break;
            default:
                printf("%c", message[k]);
                break;
        }
    }
    
    //Print 10 or so exclamation marks and be a citizen
    printf("!!!!!!!!!!!!!!\n");
    return 0;
    
}
