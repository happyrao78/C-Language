#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("enter the size of string:");
    scanf("%d",&n);
    getchar();
    
        char str[n+1];
        puts("enter string:");
        fgets(str,n+1,stdin);
        puts(str);        
    return 0;
}