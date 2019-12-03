#include <stdio.h>
#include <stdlib.h>
#include<time.h> 


int main () 
{

    srand(time(0)); 
    int i=4;
    int Tasadof;
    int n;

    scanf("%d", &n);

    while (i>0)
    {
        Tasadof = rand() % (n+1);
        if (Tasadof %2 ==0)
        {
            printf("%d\n" , Tasadof);
            i--;
        }
        
    }

}