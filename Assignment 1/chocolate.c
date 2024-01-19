#include "settype.h"
#include "setops.h"
#include <time.h>

int howmanypackets(int N)
{
    srand((unsigned int)time(NULL));
    numset set = setinit(N);
    int count = 1;

#ifndef STAT_MODE
    while (setsize(set) < N)
    {
        int coupon = (rand() % N) + 1;
        printf("Packet %d has coupon %d, Available coupons: ", count, coupon);
        count++;
        setaddelt(set, coupon);
        printf("{");
        setprint(set);
        printf("}\n");
    }

    return count - 1;
#else
    while (setsize(set) < N)
    {
        count++;
        int coupon = (rand() % N) + 1;
        setaddelt(set, coupon);
    }
    return count - 1;
#endif
}

int main()
{
    int N;
    printf("Number of coupons (N): ");
    scanf("%d", &N);

#ifndef STAT_MODE
    printf("+++ Interactive mode\n");
    int numpackets = howmanypackets(N);
    printf("... %d Packets were bought\n", numpackets);

    return 0;
#endif

    printf("+++ Statistic mode\n");
    long long int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        int count = howmanypackets(N);
        sum += count;
    }
    printf("... Average number of packets to buy = %lf\n", sum / 1000.0);

    return 0;
}