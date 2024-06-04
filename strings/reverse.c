#include<stdio.h>
#include<string.h>

int main(){
    int x;
    printf("enter the size of string:");
    scanf("%d",&x);
    getchar();
    char str[x+1];
    printf("enter string:");
    fgets(str,x+1,stdin);
    puts(str);
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i=0,j=x-1;i<=j;i++,j--){
        char temp= str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("reversed string is:");
    puts(str);
    return 0;
}




