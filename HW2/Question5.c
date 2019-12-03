#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    int a ,b;

    int x1a,x2a,y1a,y2a,x1b,x2b,y1b,y2b,x1c,x2c,y1c,y2c;
    srand(time(0)); 
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d" , &x1a,&x2a,&y1a,&y2a,&x1b,&x2b,&y1b,&y2b,&x1c,&x2c,&y1c,&y2c);

    int randxa = (rand() % (x2a-x1a+1)) +x1a;
    int randya = (rand() % (y2a-y1a+1)) +y1a;

    printf("(%d , %d)\n" , randxa , randya);

    int randxb = (rand() % (x2b-x1b+1)) +x1b;
    int randyb = (rand() % (y2b-y1b+1)) +y1b;

    printf("(%d , %d)\n" , randxb,randyb);


    int randxc = (rand() % (x2c-x1c+1)) +x1c;
    int randyc = (rand() % (y2c-y1c+1)) +y1c;

    printf("(%d , %d)\n" , randxc , randyc);


    int AB = sqrt( pow(randxb-randxa ,2) + pow(randyb-randya ,2) );
    int AC = sqrt( pow(randxc-randxa ,2) + pow(randyc-randya ,2) );
    int BC = sqrt( pow(randxc-randxb ,2) + pow(randyc-randyb ,2) );

    int perimeter = AB + AC + BC;

    printf("%d" , perimeter);

}