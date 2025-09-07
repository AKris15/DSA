#include<stdio.h>
int main()
{
    int a[100], n, i, d;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to be deleted from the beginning: ");
    scanf("%d", &d);

    for(i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("Array after deletion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}