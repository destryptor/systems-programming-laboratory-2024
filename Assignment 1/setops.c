// Name: Sharanya Chakraborty
// Roll No.: 22CS10088

#include <stdio.h>
#include <stdlib.h>
#include "setops.h"

void setprint(numset S)
{
    int N = S.S[0];
    for (int i = 1; i <= N; i++)
    {
        if (S.S[i] == 1)
        {
            printf("%d ", i);
        }
    }
}

int setsize(numset S)
{
    int N = S.S[0];
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (S.S[i] == 1)
            count++;
    }
    return count;
}

numset setaddelt(numset set, int i)
{
    if (set.S[i] == 1)
    {
        return set;
    }
    set.S[i] = 1;
    return set;
}

numset setdelelt(numset set, int i)
{
    if (set.S[i] == 0)
    {
        printf("Element %d not present in set\n", i);
        return set;
    }
    set.S[i] = 0;
    return set;
}

numset setunion(numset A, numset B)
{
    numset res;
    int N = A.S[0];
    res.S = (int *)calloc(N + 1, sizeof(int));
    res.S[0] = N;
    for (int i = 1; i < N + 1; i++)
    {
        if (A.S[i] == 1)
            res.S[i] = 1;
    }
    for (int i = 1; i < N + 1; i++)
    {
        if (B.S[i] == 1)
            res.S[i] = 1;
    }

    return res;
}

numset setintersection(numset A, numset B)
{
    numset res;
    int N = A.S[0];
    res.S = (int *)calloc(N + 1, sizeof(int));
    res.S[0] = N;

    for (int i = 1; i < N + 1; i++)
    {
        if ((A.S[i] == 1) && (B.S[i] == 1))
            res.S[i] = 1;
    }

    return res;
}