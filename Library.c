#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int id;
    char title[50];
    char author[50];
    int year;
}Book;

void DisplayBooks(Book* book, int size)
{
    for (int i = 0; i < size; i++)
    {
        if(book[i].id == 0)
        {
            break; // Assuming ID 0 means an empty slot, stop displaying further
        }
        printf("Book ID: %d\n", book[i].id);
        printf("Title: %s\n", book[i].title);
        printf("Author: %s\n", book[i].author);
        printf("Year: %d\n", book[i].year);
    }
    
}

void AddBook(Book* book, int size)
{
    int id;
    for (int i = 0; i < size; i++)
    {
        if (book[i].id == 0) // Assuming ID 0 means an empty slot
        {
            id = i; // Use the index as the book ID
            break;
        }
        else if (i == size -1)
        {
            printf("Library is full. Cannot add more books.\n");
            return;
        }
    }
    

    book[id].id = id;
    printf("Enter book title: ");
    scanf(" %[^\n]", book[id].title); // Read string with spaces
    printf("Enter publication year: ");
    scanf("%d", &book[id].year);
    printf("Enter book author: ");
    scanf(" %[^\n]", book[id].author); // Read string with spaces
}

void FindBookByID(Book* book, int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (book[i].id == id)
        {
            printf("Book found:\n");
            printf("Title: %s\n", book[i].title);
            printf("Author: %s\n", book[i].author);
            printf("Year: %d\n", book[i].year);
            return;
        }
    }
    printf("Book with ID %d not found.\n", id);
}


int main()
{
    int size = 100; // Maximum number of books
    Book* book = (Book*)malloc(size * sizeof(Book));
    
    while (1)
    {
        printf("Select Menu\n");
        printf("1. Display books\n");
        printf("2. Add book\n");
        printf("3. Find book by ID\n");
        printf("4. Exit\n");

        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                DisplayBooks(book, size);
                break;
            case 2:
                AddBook(book, size);
                break;
            case 3:
                printf("Enter book ID to find: ");
                int id;
                scanf("%d", &id);
                FindBookByID(book, size, id);
                break;
            case 4:
                free(book);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    


    return 0;
}