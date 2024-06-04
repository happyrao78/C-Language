#include<stdio.h>

int main(){
    int y;
    printf("enter no.:");
    scanf("%d",&y);
    int fact=1;
    for(int i=2;i<=y;i++){
         if(y==0 || y==1){
            printf("1");
        }
        else{
            fact *= i;
    }
    }
    printf("\nfactorial of %d is: %d",y,fact);
    return 0;
}