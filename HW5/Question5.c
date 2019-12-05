#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int arr[70];
    int n;
    int r;
    int i = 0;
    int first;
    int last;
    int q=0;
    int max=0;
    int temp;
    scanf("%d" , &n);
    while (n > 0)
    {
        r = n & 1;
        arr[i] = r;
        i++;
        n = n / 2;
    }
    
    for(int j=0; j < i ; j++)
    {
        if(arr[j]==1 && q==0)
        {
            first = j;
            q=1;
        }
        else if(arr[j]==1)
        {
            last=j;
            temp = last - first;
            first=last;
        }
        if(temp>max)
            {
                max=temp;
            }

    }
    printf("%d", max);
}