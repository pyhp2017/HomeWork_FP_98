#include <stdio.h>
#include <stdlib.h>

int result;

void sort(int n, int *ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(ptr + j) < *(ptr + i))
            {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    sort(n, array);

    int i =1;
    int result;
    int *ptr = &array[0];
    int q = 1;
    while (q)
    {
        ptr = &array[0];
        for (int j = 0; j < n; j++)
        {
            if (*ptr == i)
            {
                break;
            }
            else if(ptr == &array[n-1] && *ptr != i)
            {
                q = 0;
                result = i;
                break;
            }
            ptr++;
        }

        i++;
    }
    
    printf("%d" , result);
}