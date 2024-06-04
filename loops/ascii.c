#include<stdio.h>
int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
     printf("enter b:");
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        printf("%d ",i);
        char ch = (char)i;//typecasting for printing the values of special character::
        printf("%c ",ch);
        printf("\n");
    }
    return 0;
}