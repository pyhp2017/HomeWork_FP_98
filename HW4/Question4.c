#include <stdio.h>
#include <math.h>

int main()
{
    int c,cback;
    scanf("%d" , &c);
    cback = sqrt(c)+1;
    for (int i = 0; i <= cback; i++)
    {
        for (int j = 0; j <= cback; j++)
        {
            if ( (int)pow(i,2) + (int)pow(j,2) == c )
            {
                printf("true");
                return 0;
            }
        }
        
        
    }
    printf("false");
    
}