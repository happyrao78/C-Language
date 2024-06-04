#include<stdio.h>
#include<string.h>

int main(){
    int n,y;
    char z;
    printf("enter the size of string:");
    scanf("%d",&n);
        getchar();

    char str[n+1];
    printf("Enter a string: ");
    fgets(str,n+1,stdin);
    printf("the string you entered is:");
    puts(str);
    printf("now enter the index where you want to add the letter before or after:");
    scanf("%d",&y);
    printf("enter the word u want to add:");
    scanf(" %c",&z);

    for(int i=n;i>=y;i--){
        str[i+1]=str[i];
    }
    str[y]=z;
    printf("the new string is:");
    puts(str);
    return 0;

}