#include <stdio.h>

int main()
{
    int AfradDarSaf , Parchin;
    int count=0;
    int temp;
    scanf("%d %d" , &AfradDarSaf , &Parchin);
    int i =1;
    while (i<=AfradDarSaf)
    {
        scanf("%d" , &temp);
        if (temp <= Parchin)
        {
            count++;
        }
        else
        {
            count +=2;
        }
        
        
        i++;
    }

    printf("%d" , count);
}