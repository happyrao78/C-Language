#include<stdio.h>
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    int rev=0;
    int ld=0;
    while(x!=0){
        ld= x%10;
        rev = (rev*10)+ld;
        x /=10;
    }
    printf("the reversed number is %d",rev);
    return 0;
}