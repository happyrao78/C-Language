#include<stdio.h>
#include<string.h>

int main(){
    struct book{
        char name[100];
        float price;
        int pages;
    }book1,book2;
    printf("Enter the details of first book:\n");
    printf("enter the book 1 name:");
    fgets(book1.name,100,stdin);
    printf("enter price:");
    scanf("%f",&book1.price);
    printf("enter the pages:");
    scanf("%d",&book1.pages);
    getchar();
        printf("Enter the details of second book:\n");
    printf("enter the book 2 name:");
    fgets(book2.name,100,stdin);
    printf("enter price:");
    scanf("%f",&book2.price);
    printf("enter the pages:");
    scanf("%d",&book2.pages);
    puts(book1.name);
    printf("price :%.1f\n",book1.price);
    printf("\n%d\n",book1.pages);
 puts(book2.name);
    printf("price :%.1f\n",book2.price);
    printf("\n%d",book2.pages);
    return 0;
}