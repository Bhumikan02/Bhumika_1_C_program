#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100

struct Book {
    int id;
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
};

struct Book books[MAX_BOOKS];
int totalBooks = 0;

void addBook() {
    if (totalBooks < MAX_BOOKS) {
        struct Book newBook;
        newBook.id = totalBooks + 1;

        printf("Enter book title: ");
        getchar();  // to consume any trailing newline from previous input
        fgets(newBook.title, MAX_TITLE_LENGTH, stdin);
        newBook.title[strcspn(newBook.title, "\n")] = '\0';  // remove trailing newline

        printf("Enter author name: ");
        fgets(newBook.author, MAX_AUTHOR_LENGTH, stdin);
        newBook.author[strcspn(newBook.author, "\n")] = '\0';  // remove trailing newline

        books[totalBooks] = newBook;
        totalBooks++;
        printf("Book added successfully.\n");
    } else {
        printf("Cannot add more books. Library is full.\n");
    }
}

void searchBook() {
    char searchTitle[MAX_TITLE_LENGTH];
    int found = 0;

    printf("Enter book title to search: ");
    getchar();  // to consume any trailing newline
    fgets(searchTitle, MAX_TITLE_LENGTH, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0';  // remove trailing newline

    for (int i = 0; i < totalBooks; i++) {
        if (strstr(books[i].title, searchTitle) != NULL) {
            printf("Book Found: ID: %d, Title: %s, Author: %s\n", books[i].id, books[i].title, books[i].author);
            found = 1;
        }
    }

    if (!found) {
        printf("No book found with the title: %s\n", searchTitle);
    }
}

void deleteBook() {
    int bookId, found = 0;

    printf("Enter book ID to delete: ");
    scanf("%d", &bookId);

    for (int i = 0; i < totalBooks; i++) {
        if (books[i].id == bookId) {
            found = 1;
            for (int j = i; j < totalBooks - 1; j++) {
                books[j] = books[j + 1];
            }
            totalBooks--;
            printf("Book with ID %d deleted successfully.\n", bookId);
            break;
        }
    }

    if (!found) {
        printf("No book found with ID: %d\n", bookId);
    }
}

void displayBooks() {
    if (totalBooks == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("Library Books:\n");
    for (int i = 0; i < totalBooks; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", books[i].id, books[i].title, books[i].author);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Delete Book\n");
        printf("4. Display Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                deleteBook();
                break;
            case 4:
                displayBooks();
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
