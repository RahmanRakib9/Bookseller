#include "stdio.h"

struct Book
{
    char bookName[50];
    double bookPrice;
    double tax;
    int bookCode;
};

struct Book inputBooks()
{
    struct Book book;
    printf("Enter Book Name: \n");
    fflush(stdin);
    gets(book.bookName);
    printf("Enter Book Code: \n");
    scanf("%d", &book.bookCode);
    printf("Enter Book Price: \n");
    scanf("%lf", &book.bookPrice);
    book.tax = book.bookPrice * .05;
    return book;
}

void displayBook(struct Book bookArr[], int arrSize)
{
    printf("\n\n\n");
    for (int i = 0; i < arrSize; i++)
    {
        printf("Book Name :  %s\n", bookArr[i].bookName);
        printf("Book Code :  %d\n", bookArr[i].bookCode);
        printf("Book Price:  %.2lf\n", bookArr[i].bookPrice);
        printf("Book Tax  :  %.2lf\n", bookArr[i].tax);
    }
}

int main()
{
    int i, n;
    printf("How Many Books Would You Like To Input For Sell?\n");
    scanf("%d", &n);

    struct Book booksArray[n];

    for (i = 0; i < n; i++)
    {
        booksArray[i] = inputBooks();
    }

    displayBook(booksArray,)

    return 0;
}