#include<stdio.h>
void increasing(int x){
    if(x==0) return;
    printf("%d\n",x);
    increasing(x-1);
    printf("%d \n",x);//ye condition hi bas ek step aage aajyegi to ye increasing ka code ban jayega
    return;
}
int main(){
    int n;
    printf("enter  the value of n:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}