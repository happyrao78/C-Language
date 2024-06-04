#include<stdio.h>

int main(){
    int x;
    printf("enter the number");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(i%2!=0){
            continue;
        }
            printf("%d ",i);
    }
    return 0;
}