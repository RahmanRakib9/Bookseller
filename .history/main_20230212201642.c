#include "stdio.h"

struct Book
{
    char bookName[50];
    double bookPrice;
    double tax;
    int bookCode;
};

int main()
{
    int i, n;
    printf("How Many Books Would You Like To Input For Sell?\n");
    scanf("%d", &n);
    int arr[n];
    
}