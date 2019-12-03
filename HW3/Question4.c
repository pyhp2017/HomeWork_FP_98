#include <stdio.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d %d %d %d %d %d %d %d" , &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);



    if (  ((x4-x1)*(x2-x1)) + ((y4-y1)*(y2-y1)) == 0 )
    {
        // printf("a.b=0"); --> Yak zavieh Ghahyem Darad;

        if (sqrt( pow(x2-x1 , 2) + pow(y2-y1 ,2) ) == sqrt(  pow(x2-x3 , 2)  + pow(y2-y3 , 2)  ))
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
        

    }
    else
    {
        printf("false");
    }
    
    

}