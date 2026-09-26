#include <stdio.h>

int main()
{
    int arr[100], n, element, i, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position
    pos = 0;
    while(pos < n && arr[pos] < element)
    {
        pos++;
    }

    // Shift elements to the right
    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}