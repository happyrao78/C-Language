#include<stdio.h>
int mazepath(int n,int m){
    int rightways=0, downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightways += mazepath(n,m-1);
    }
     if(m==1){
        downways += mazepath(n-1,m);
    }
    if(n>1 && m>1){
                rightways += mazepath(n,m-1);
        downways += mazepath(n-1,m);
    }
    return rightways+downways;

}
int main(){
    int r,c;
    printf("enter the no. of rows:");
    scanf("%d",&r);
    printf("enter the no. of columns:");
    scanf("%d",&c);
    int result = mazepath(r,c);
    printf("total ways are %d",result);
    return 0;
}