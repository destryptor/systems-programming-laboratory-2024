#include "soln1.h"

int findterm1(recrel1 reln, int n)
{
    if (n == 0)
        return reln.a0;
    return reln.c1 * findterm1(reln, n - 1) + reln.d;
}