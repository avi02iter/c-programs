#include <stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the array element\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("the sum is %d\n", sum);
    printf("the average is %d\n", sum / n);

    return 0;
}