#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    if(n==1){
        printf("one");
    }
    else if(n==2)
    {
        printf("two");
    }
    else if(n==3)
    {
        printf("three");
    }
    else if(n==4)
    {
        printf("four");
    }
    else if(n==5)
    {
        printf("five");
    }
    else if(n==6)
    {
        printf("six");
    }
    else if(n==7)
    {
        printf("seven");
    }
    else if(n==8)
    {
        printf("eight");
    }
    else if(n==9)
    {
        printf("nine");
    }
    else {
    {
        printf("Greater than 9");
    }
    }

    return 0;
}
