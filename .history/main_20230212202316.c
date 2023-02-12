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
}

int main()
{
    int i, n;
    printf("How Many Books Would You Like To Input For Sell?\n");
    scanf("%d", &n);

    struct Book booksArray[n];

    return 0;
}