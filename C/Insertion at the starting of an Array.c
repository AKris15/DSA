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

    printf("Enter the value to be inserted: ");
    scanf("%d", &d);

    // Shift elements to the right to make space for the new element
    for(i = n; i >= 1; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert the new element at the First position
    a[0] = d;
    n++; // Increase the size of the array

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}