#include<stdio.h>

int main(){
    int y;
    printf("enter a number:");
    scanf("%d",&y);
    int ld=0;
    int rev=0;
    int sum=0;
    while(y!=0){
ld = y%10;
rev = (rev*10)+ld;
y /=10;
sum +=ld;
    }
    printf("rev:%d sum:%d",rev,sum);
    return 0;
}