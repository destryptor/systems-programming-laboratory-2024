#include "soln2.h"

int findterm2(recrel2 reln, int n)
{
    if (n == 0)
        return reln.a0;
    if (n == 1)
        return reln.a1;
    return reln.c1 * findterm2(reln, n - 1) + reln.c2 * findterm2(reln, n - 2) + reln.d;
}