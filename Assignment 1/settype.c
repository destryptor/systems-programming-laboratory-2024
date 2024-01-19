// Name: Sharanya Chakraborty
// Roll No.: 22CS10088

#include <stdio.h>
#include <stdlib.h>
#include "settype.h"

numset setinit(int N)
{
    numset set;
    set.S = (int *)calloc((N + 1), sizeof(int));
    set.S[0] = N;
    return set;
}

numset setrand(int N)
{
    numset randset;
    randset.S = (int *)calloc((N + 1), sizeof(int));
    randset.S[0] = N;

    for (int i = 1; i < N; i++)
    {
        randset.S[i] = rand() % 2;
    }

    return randset;
}

numset setrandsize(int N, int t)
{
    numset randset;
    randset.S = (int *)calloc((N + 1), sizeof(int));
    randset.S[0] = N;

    for (int i = 0; i < t; i++)
    {
        int num = (rand() % N) + 1;
        if (randset.S[num] == 1)
        {
            while (1)
            {
                num = (rand() % N) + 1;
                if (randset.S[num] != 1)
                {
                    randset.S[num] = 1;
                    break;
                }
            }
        }
        else
        {
            randset.S[num] = 1;
        }
    }

    return randset;
}

numset setdestroy(numset set)
{
    free(set.S);
    return set;
}
