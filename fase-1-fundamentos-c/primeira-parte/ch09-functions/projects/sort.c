/* Asks the user to enter a series of integers (which it stores in an array), then sorts the integers by calling the function selection_sort */

#include<stdio.h>

void selection_sort(int a[], int n);

int main(void)
{
    int n;

    printf("Welcome to the sort integers program.\n\n");
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int a[n];
    
    printf("Enter the %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    selection_sort(a, n);

    printf("Sorted integers: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n)
{
    if (n - 1 < 0)
        return;
    
    int largest = a[0], index = 0;

    for (int i = 1; i < n; i++) {
        if (largest < a[i]) {
            largest = a[i];
            index = i;
        }
    }

    a[index] = a[n - 1];
    a[n - 1] = largest;

    selection_sort(a, n - 1);
}