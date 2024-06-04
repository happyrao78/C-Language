#include<stdio.h>

int main(){
    int s,product;
    printf("enter the size of array:");
    scanf("%d",&s);
    int p[s];
    product = 1;
    for(int i=1; i<=s;i++){
        scanf("%d",&p[i]);
        product= product * p[i];
    }
    printf("your answer is %d",product);
    return 0;
} 