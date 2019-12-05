#include <stdio.h>

// Algo fibonachi hastesh

int fibona(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibona(n-1) + fibona(n-2);
}

int main()
{
    int n;
    scanf("%d" , &n);
    int ways = fibona(n+1);
    printf("%d" , ways);

}