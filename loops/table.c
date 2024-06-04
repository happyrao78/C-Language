#include<stdio.h>
int main(){
    int x,n,count=0;
    while(count=1){
        printf("enter the number whose table  you want to print:");
    scanf("%d",&x);
    printf("enter upto which no. you want to print the table:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d * %d = %d\n",x,i,i*x);
    }
    count++;
    
    printf("enter 0 to exit or 1 to continue ");
    scanf("%d",count);
    while(count==0){
        printf("thanks");
        break;
    }
    }
    
    return 0;
}