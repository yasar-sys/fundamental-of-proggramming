#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b[10];
    int n, i, max = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        printf("\nBook %d:\n", i+1);
        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);

        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    // Find most expensive
    for(i = 1; i < n; i++) {
        if(b[i].price > b[max].price) {
            max = i;
        }
    }

    // Output
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", b[max].title);
    printf("Author: %s\n", b[max].author);
    printf("Price: %.2f\n", b[max].price);

    return 0;
}