#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* arr;
    int* checked;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int*)malloc(size * sizeof(int));
    checked = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        checked[i] = 0; // Initialize checked array to 0
    }

    for (int i = 0; i < size; i++)
    {
        if (checked[i] == 0) // If the element has not been checked
        {
            int count = 1; // Count the current element
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j]) // If a duplicate is found
                {
                    count++;
                    checked[j] = 1; // Mark the duplicate as checked
                }
            }
            printf("Element %d occurs %d times\n", arr[i], count);
        }
    }

    free(arr);
    free(checked);

    return 0;
    
    
}