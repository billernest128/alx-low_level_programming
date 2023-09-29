#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int cents, numCoins, count;
    int coins[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    numCoins = sizeof(coins) / sizeof(coins[0]);
    count = 0;

    for (int i = 0; i < numCoins; i++)
    {
        while (cents >= coins[i])
        {
            cents -= coins[i];
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

