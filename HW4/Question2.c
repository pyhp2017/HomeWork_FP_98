#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    srand(time(0));
    scanf("%d" , &n);
    int p;
    int i=0;
    int x=0;
    printf("%d\n" , x);
    while (i < n)
    {
        p = rand() % 2;
        
        if (p==1)
        {
            x++;
            printf("%d\n" , x);
        }
        else if( p == 0)
        {
            x--;
            printf("%d\n" , x);
        }
        
        
        i++;
    }

    
}