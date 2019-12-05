#include <stdio.h>

int main()
{
    int a, b, c, max;
    int arr[4];
    int res[3];
    int s = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int j = 0; j < 4; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
        
    }
    
    for (int z = 0; z < 4; z++)
    {
        if (arr[z] != max)
        {

            while (s < 3)
            {
                res[s] = max - arr[z];
                s++;
                break;
            }
            
            
        }
        
    }

    int u=0;
    while (u<3)
    {
        printf("%d " , res[u]);
        u++;
    }
    
    
    
}