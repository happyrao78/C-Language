#include<stdio.h>
int power(int a,int b ){
    if(b==0)return 1;
    if(b%2==0){//even
     return  power(a,b/2)*power(a,b/2);
    }
    else{ //odd
     return power(a,b/2)*power(a,b/2)*a;
     }
}
    


int main(){
    int a,b;
    printf("emter the base:");
    scanf("%d",&a);
    printf("enter the power:");
    scanf("%d",&b);
    int result = power(a,b);
    printf("%d raised to power %d is-> %d",a,b,result);

    return 0;
}