#include<stdio.h>
#include<string.h>

int main(){
    int x,y;
    printf("enter the size of first string:");
    scanf("%d",&x);
    getchar();
    char str1[x+1];
    printf("enter the 1st string:");
    fgets(str1,x+1,stdin);
    puts(str1);
    printf("enter the size of second string:");
    scanf("%d",&y);
    getchar();
    char str2[y+1];
    printf("enter the string 2:");
    fgets(str2,y+1,stdin);
    puts(str2);
    if(strcmp(str1,str2)==0){
        printf("both strings are same");
    }
    else{
        printf("not same");
    }
    return 0;
}