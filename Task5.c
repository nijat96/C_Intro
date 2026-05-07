#include<stdio.h>
#include<stdlib.h>

int main()
{
    int** matrix;
    int** transpose;
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the original matrix
    matrix = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) 
    {
        matrix[i] = malloc(cols * sizeof(int));
    }

    // Input the original matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Allocate memory for the transpose matrix
    transpose = malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) 
    {
        transpose[i] = malloc(rows * sizeof(int));
    }

    // make the transpose of the matrix
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the transpose matrix
    printf("Transpose Matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    for (int i = 0; i < cols; i++)
    {
        free(transpose[i]);
    }
    
    free(matrix);
    free(transpose);


    return 0;
}