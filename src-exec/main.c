#include<stdio.h>
#include<fizzbuzz.h>
#include<stdlib.h>

int main(void)
{
    int i = 1;
    for( i = 1; i < 100; i++ ) {
        char *str = fizzbuzz(i);
        puts(str);
        free(str);
    }
    return 0;
}
