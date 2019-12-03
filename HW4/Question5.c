#include <stdio.h>
#include <string.h>

int main()
{
    char sign[] = "+";
    // printf("%c" , sign[0]);

    int Afrad,Noshabeh;
    int GharKardeh=0;
    int temp;
    scanf("%d %d" , &Afrad , &Noshabeh);
    int AfradBackup = Afrad;    
    
    int i = 1;
    while (i<=AfradBackup)
    {
        scanf("%s %d" , &sign[0] , &temp);
        if (strcmp(sign, "+") == 0)
        {
            Noshabeh += temp;
        }
        else
        {
            if (Noshabeh-temp < 0)
            {
                GharKardeh++;
            }
            else
            {
                Noshabeh -= temp;
            }
            
        }
        i++;

    }

    
    printf("%d %d" , Noshabeh , GharKardeh);
    



}