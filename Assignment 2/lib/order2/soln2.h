#include <stdio.h>
#include <stdlib.h>

typedef struct recrel2
{
    int d;
    int c1;
    int c2;
    int a0;
    int a1;
} recrel2;

int findterm2(recrel2 reln, int n);