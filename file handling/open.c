#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    fptr= fopen("happy.txt","r");
    if(fptr==NULL){
        printf("the file is not openeed.program will exit now.");
        exit(0);
    }
    else{
        printf("file opened successfully");
    }
    return 0;
}