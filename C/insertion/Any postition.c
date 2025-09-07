#include<stdio.h>

int main(){
    int a[100], n, i, p, d;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the position where you want to insert the new element (0 to %d): ", n);
    scanf("%d", &p);

    printf("Enter the value to be inserted: ");
    scanf("%d", &d);
    // Shift elements to the right to make space for the new element
    for(i = n; i >= p; i--){
        a[i] = a[i - 1];
    }
    // Insert the new element at the Last position
    a[p-1] = d;
    n++; // Increase the size of the array

    printf("Array after insertion: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}