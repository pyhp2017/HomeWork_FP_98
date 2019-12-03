#include <stdio.h>

int count(int num)
{
    int count = 0;

    while(num != 0)
    {
        count++;
        num /= 10;
    }

    return count;

}

int main()
{
    int n ;
    scanf("%d" , &n);
    int nn = n;
    int arr[count(n)];
    int i=0;
    int temp;
    


    while (i< count(n))
    {
        temp =  nn %10; // 230
        nn = nn/10;
        arr[i] = temp;
        i++;
    }


    int arrrev[count(n)];

    int revIndex = 0;
    int arrIndex = count(n)-1;
    while(arrIndex >= 0)
    {
        arrrev[revIndex] = arr[arrIndex];
        
        revIndex++;
        arrIndex--;
    }


    for (int j = 0; j < count(n); j++)
    {

        printf("%d: " , arrrev[j]);
        if (arrrev[j] == 0)
        {
            printf(" ");
        }
        else
        {
            int k=0;
            while (k < arrrev[j])
            {
             printf("%d", arrrev[j]);
             k++;
             }
        
        }
        printf("\n");


    }
    
    
       
}