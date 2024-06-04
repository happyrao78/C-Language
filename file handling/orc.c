#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *ptr1;
    char str[200];
    ptr1 = fopen("happy.txt","r");
    if(ptr1 == NULL){
        printf("not opened");
    }
    else{
        printf("file opened");
    }
    while(fgets(str,200,ptr1)!=NULL){
        printf("\n%s",str);
    }
    fclose(ptr1);
    printf("\ndata successfully read from happy.txt\n");
    printf("\nfile closed now.\n");
    return 0;
}