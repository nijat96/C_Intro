#include<stdio.h>
#include<stdlib.h>

int main()
{
    int** matrix;
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the matrix
    matrix = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) 
    {
        matrix[i] = malloc(cols * sizeof(int));
    }

    // Input values into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Print the matrix
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}