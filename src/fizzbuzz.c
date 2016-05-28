#include<stdlib.h>
#include<string.h>
#include<stdio.h>

static const char* str_fizz = "fizz";
static const char* str_buzz = "buzz";
static const char* str_fizzbuzz = "fizzbuzz";

char* fizzbuzz(int n) {
    char *buf;
    if( n % 15 == 0 ) {
        buf = malloc(strlen(str_fizzbuzz) + 1);
        strcpy(buf, str_fizzbuzz);
    } else if( n % 3 == 0 ) {
        buf = malloc(strlen(str_fizz) + 1);
        strcpy(buf, str_fizz);
    } else if( n % 5 == 0 ) {
        buf = malloc(strlen(str_buzz) + 1);
        strcpy(buf, str_buzz);
    } else {
        buf = malloc(21);
        sprintf(buf, "%d", n);
    }
    return buf;
}
    

