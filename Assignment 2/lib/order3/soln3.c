#include "soln3.h"

int findterm3(recrel3 reln, int n)
{
    if (n == 0)
        return reln.a0;
    if (n == 1)
        return reln.a1;
    if (n == 2)
        return reln.a2;
    return reln.c1 * findterm3(reln, n - 1) + reln.c2 * findterm3(reln, n - 2) + reln.c3 * findterm3(reln, n - 3) + reln.d;
}