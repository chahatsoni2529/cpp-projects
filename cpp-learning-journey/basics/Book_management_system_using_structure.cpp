#include <stdio.h>

// Define structure
struct Book {
    int id;
    char name[50];
    char author[50];
    float price;
};

int main() {
    struct Book b;

    // Input
    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.name);   // allows spaces

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author); // allows spaces

    printf("Enter Price: ");
    scanf("%f", &b.price);

    // Output
    printf("\n--- Book Details ---\n");
    printf("Book ID   : %d\n", b.id);
    printf("Book Name : %s\n", b.name);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);

    return 0;
}
