// Name: Sharanya Chakraborty
// Roll No.: 22CS10088

#ifndef SETTYPE_H
#define SETTYPE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct numset
{
    int *S;
} numset;

numset setinit(int N);
numset setrand(int N);
numset setrandsize(int N, int t);
numset setdestroy(numset S);

#endif