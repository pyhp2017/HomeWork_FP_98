#include <stdio.h>

int main()
{
    int n, max, min;
    scanf("%d", &n);
    int x[n];
    int y[n];
    int i = 0;
    while (i < n)
    {
        scanf("\n(%d, %d)", &x[i], &y[i]);
        i++;
    }

    max = x[0];
    min = y[0];

    int j = 0;
    while (j < n)
    {
        if (max < x[j])
        {
            max = x[j];
        }
        if (min > y[j])
        {
            min = y[j];
        }
        j++;
    }
    printf("(%d, %d)" , max , min);
}