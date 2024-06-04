#include<stdio.h>
int pov(int a,int b){
    if(b==0) return 1;
    if(b%2==0){//even place
        return pov(a,b/2)*pov(a,b/2);
    }
    else{//odd place
                return pov(a,b/2)*pov(a,b/2)*a;

    }
}

int main(){
    int base,power;
    printf("enter the base and power:");
    scanf("%d%d",&base,&power);
    int x=pov(base,power);
    printf("%d",x);
    return 0;
}
