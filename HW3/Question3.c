#include <stdio.h>
#include <math.h>


int main()
{

   float n ,y;
   scanf("%f" , &n);
    y = log2(n);

    if (y == (int)floor(y))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
   
}