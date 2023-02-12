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
    for(int i=0;i<arrSize;i++)
    {
        printf("%s",bookArr[i].)
    }
}

int main()
{
    int i, n;
    printf("How Many Books Would You Like To Input For Sell?\n");
    scanf("%d", &n);

    struct Book booksArray[n];

    return 0;
}