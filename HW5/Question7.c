#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n], arr3[n];
    int a, b, c;
    arr1[0] = 1;
    arr1[1] = 1;
    arr1[2] = arr1[1] + arr1[0];

    arr2[0] = 1;
    arr2[1] = 1;
    arr2[2] = 1;

    arr3[0] = 1;
    arr3[1] = 1;
    arr3[2] = 2;

    if (n == 0)
    {
        printf("%d\n%d\n%d\n", arr1[0], arr2[0], arr3[0]);
    }
    if (n == 1)
    {
        printf("%d\n%d\n%d\n", arr1[1], arr2[1], arr3[1]);
    }
    if (n == 2)
    {
        printf("%d\n%d\n%d\n", arr1[2], arr2[2], arr3[2]);
    }

    if (n != 0 && n != 1 && n != 2)
    {
        for (int i = 2; i <= n; i++)
        {
            arr1[i] = arr1[i - 1] + arr1[i - 2];
            a = arr1[i];
        }
        for (int j = 3; j <= n; j++)
        {
            arr2[j] = arr2[j - 2] + arr2[j - 3] - arr2[j - 1];
            b = arr2[j];
        }
        for (int z = 3; z <= n; z++)
        {
            arr3[z] = 2 * arr3[z - 2] - arr3[z - 1] + arr3[z - 3];
            c = arr3[z];
        }
        printf("%d\n%d\n%d\n", a, b, c);
    }
}