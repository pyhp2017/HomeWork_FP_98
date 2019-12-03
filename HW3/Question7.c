#include <stdio.h>
#include <math.h>

int main()
{


    int pig=0;
    int buckets;
    int minutesToTest=15;
    int minutesToDie=15;
    int linear_bucket_count = minutesToTest/minutesToDie + 1;

    scanf("%d" , &buckets);

    while ( pow(linear_bucket_count,pig) < buckets)
    {
        pig++;
    }
    
    printf("%d" , pig);

}