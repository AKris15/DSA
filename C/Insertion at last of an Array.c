#include<stdio.h>

int main(){
    int a[100],n,i,d;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the value to be inserted: ");
    scanf("%d",&d);
    // Insert the new element at the last position
    a[n]=d;
    n++; // Increase the size of the array
    printf("Array after insertion: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}