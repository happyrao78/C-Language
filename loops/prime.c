#include<stdio.h>
int main(){
    int x;
    printf("enter the value of x:");
    scanf("%d",&x);
    int check=0;
    for(int i=2;i<=x-1;i++){
        if(x%i==0){
            check=1;
            break;
        }
    }
    if(x==0) {
        printf("not prime not composite");
        }

    else if(check==1){ 
        printf("composite");
        }
    else{
            printf("prime");
        }
    return 0;
}