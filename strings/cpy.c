#include<stdio.h>
#include<string.h>

int main(){
    int x,y;
    printf("enter the size of string:");
    scanf("%d",&x);
    getchar();
    char str[x+1];
    printf("enter string:");
    fgets(str,x+1,stdin);
    puts(str);
    char str2[x+1];
    int length= strlen(str);
    for(int i=0;i<length;i++){
        str2[i]=str[i];
    }
  
    printf("copied string :");
    puts(str2);

    return 0;
}