// Name: Sharanya Chakraborty
// Roll No.: 22CS10088

#ifndef SETOPS_H
#define SETOPS_H

#include <stdio.h>
#include <stdlib.h>
#include "settype.h"

void setprint(numset S);
int setsize(numset S);
numset setaddelt(numset set, int i);
numset setdelelt(numset set, int i);
numset setunion(numset A, numset B);
numset setintersection(numset A, numset B);

#endif