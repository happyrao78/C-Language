#include<stdio.h>
int sq(int i){
    return i *=i;
}
int main(){
    int x;
    printf("enter the value of x:");
    scanf("%d",&x);
    int square= sq(x);
    printf("square of %d is: %d",x,square);
    return 0;
}