#include "main.h"

/**
 * power - get power
 * Return: power
 */
int power(int x, int n)
{
    int idx, pw = 1;

    for (idx = 1; idx <= n; ++idx)
    {
        pw *= x;
    }
    return (pw);
}
