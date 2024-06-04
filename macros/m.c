#include<stdio.h>
#define AND &&
#define ARANGE (a > 25 AND a < 50)
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    if(ARANGE){
        printf("within range");
    }
    else{
        printf("out of range");
    }
    
    return 0;
}