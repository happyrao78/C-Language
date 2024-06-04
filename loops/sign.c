#include<stdio.h>

int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    int sum=0;
    for(int i=1;i<=a;i++){
        if(i%2==0){
            sum =-a/2;
        }
        else{
            sum = -a/2+a;
        }

    }
    printf("answer :%d",sum);
    return 0;
}