#include <stdio.h>
#include <stdlib.h>

typedef struct recrel3
{
    int d;
    int c3;
    int c2;
    int c1;
    int a2;
    int a1;
    int a0;
} recrel3;

int findterm3(recrel3 reln, int n);