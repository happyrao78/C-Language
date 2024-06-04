#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr = fopen("new.txt","w");
    if(fptr==NULL){
        printf("file not created successfully");
    }
    else{
        printf("file created successfully\n");
    }
    char str[100];
printf("\nenter the string to enter in the file: ");
    fgets(str,100,stdin);
 puts(str);
 if(strlen(str)>0){
 fputs(str,fptr);
 fputs("\n",fptr);
 }
 while(fgets(str,100,fptr)!=NULL){
    printf("%s",str);
 }
fclose(fptr);
printf("\ndata has been entered to the new file i.e new.txt\n");
printf("\nfile has been closed now."); 
    return 0;
}