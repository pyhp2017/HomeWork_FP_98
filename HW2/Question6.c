#include <stdio.h>

int main()
{

    int h,w,k;
    scanf("%d %d %d" , &h,&w,&k);

    int marzie=0;
    while(k>0)
    {
        marzie += h + h + w + w - 4;
        h -=4;
        w -=4;
        k--;
    }

    printf("%d" , marzie);

}