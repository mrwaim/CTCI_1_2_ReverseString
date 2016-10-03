/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: klsandbox
 *
 * Created on October 3, 2016, 3:47 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * 
 */

void reverse(char* str);

int main(int argc, char** argv) {

    char str[] = "Hello World";
    printf("%s\n", str);
    reverse(str);
    printf("%s\n", str);
    printf("end\n");
    return (EXIT_SUCCESS);
}

void reverse(char* str) {
    int len;
    len = strlen(str);
//    printf("%d", len);
//    for (int i = 0; i < len / 2; i++) {
//        char front = str[i];
//        char back = str[len - i - 1];
//        printf("%c, %c\n", front, back);
//        str[len - i - 1] = front;
//        str[i] = back;
//    }
    char *start = str;
    char *end = str + len - 1;
    
    while (start < end) {
        char s = *start;
        char e = *end;
        *start = e;
        *end = s;
        start++;
        end--;
    }
}

