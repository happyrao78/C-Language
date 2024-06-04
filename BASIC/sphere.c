#include<stdio.h>
int main(){
    int r;
    printf("enter radius:");
    scanf("%d",&r);
float result =4*3.14*r*r*r/3;
    printf("volume of sphere is: %f",result);
    return 0;
}