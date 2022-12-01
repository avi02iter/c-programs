#include <stdio.h>

int main()
{
    int a[2][4];
    printf("enter the 2d array element\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += a[i][j];
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    printf("the sum is %d\n", sum);

    return 0;
}