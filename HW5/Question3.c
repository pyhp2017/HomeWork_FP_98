#include <stdio.h>

int x = 2, y = 1;

int move(int n)
{
    int xnamidonam = x , ynamidonam = y;
    if (n > 0)
    {
        x = (xnamidonam * xnamidonam) - (ynamidonam * ynamidonam);
        y = 2 * xnamidonam * ynamidonam;
        move(n - 1);
    }
    else
    {
        printf("(%d, %d)" , x ,y);
    }
    
    
}

int main()
{
    int n;
    scanf("%d" , &n);
    move(n);
}
