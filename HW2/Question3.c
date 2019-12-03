#include <stdio.h>
#include <math.h>
#define PI 3.14159265
#define ln(x) log(x)


int main()
{
    double a,b,c,d;
    double acal, bcal, ccal, dcal;
    scanf("%lf %lf %lf %lf", &a , &b , &c, &d);
    
    acal = ( a/(a+b) ) + ( b/(b+c) ) + ( c/(c+d) );
    bcal = pow( (M_E) , log10(fabs(a)) +  sin(b) + tan(c));
    ccal = a * (b+a) * b * (ln(c));
    dcal = pow(1/pow(a,1.2) + 2/pow(b,2.3) , 4.5);

    printf("a: %.2lf\n" , acal);
    printf("b: %.2lf\n" , bcal);
    printf("c: %.2lf\n" , ccal);
    printf("d: %.2lf\n" , dcal);
    


}