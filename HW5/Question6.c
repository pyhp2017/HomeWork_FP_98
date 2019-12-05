#include <stdio.h>
#include <math.h>

int reverseNum(int n)
{
    int result = 0;
    while (n != 0)
    {
        result = result * 10;
        result = result + (n % 10);
        n /= 10;
    }
    return result;
}

int PrimeNumber(int n)
{
    int dev;
    for (dev = 2; dev <= n-1; dev++)
    {
        if (n % dev == 0)
        {
            return 0;
        }
        
    }
    
    if (dev == n)
    {
        return 1;
    }
    
}

int main()
{
    int n ;
    scanf("%d" , &n);
    int i = n;
    int q =1; //Flag

    while (q)
    {
        if (PrimeNumber(i)  && (i == reverseNum(i)) )
        {
            printf("%d" , i);
            q = 0;
        }
        i++;
    }

}