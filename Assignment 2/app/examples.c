#include "../lib/order1/soln1.h"
#include "../lib/order2/soln2.h"
#include "../lib/order3/soln3.h"

int main()
{
    recrel1 Tower_of_Hanoi;
    Tower_of_Hanoi.a0 = 0;
    Tower_of_Hanoi.c1 = 2;
    Tower_of_Hanoi.d = 1;

    recrel2 Fib_5;
    Fib_5.a0 = 5;
    Fib_5.a1 = 6;
    Fib_5.c1 = 1;
    Fib_5.c2 = 1;
    Fib_5.d = -5;

    recrel3 Fib;
    Fib.a0 = 0;
    Fib.a1 = 1;
    Fib.a2 = 1;
    Fib.c1 = 0;
    Fib.c2 = 2;
    Fib.c3 = 1;
    Fib.d = 0;

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("ToH(%d) = %d\n", n, findterm1(Tower_of_Hanoi, n));
    printf("Fib(%d) + 5 = %d\n", n, findterm2(Fib_5, n));
    printf("Fib(%d) = %d\n", n, findterm3(Fib, n));

    exit(0);
}
