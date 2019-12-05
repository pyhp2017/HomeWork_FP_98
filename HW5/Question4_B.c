#include <stdio.h>

long int largest_factor(long int n)
{
    long int div = 2, ans = 0, maxFact;
    while (n != 0)
    {
        if (n % div != 0)
            div = div + 1;
        else
        {
            maxFact = n;
            n = n / div;
            if (n == 1)
            {
                return maxFact;
            }
        }
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    while (n >1)
    {
        printf("%d\n", largest_factor(n));
        n = n/largest_factor(n);
    }
}