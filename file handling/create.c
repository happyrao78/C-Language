#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE*fptr;
    fptr= fopen("raosab.txt","w");
    if(fptr==NULL){
        printf("file creation unsuccessful.");
        exit(0);
    }
    else{
        printf("file created successfully.go and check the desktop < coding < file handling < create.c code");
    }
    return 0;
}