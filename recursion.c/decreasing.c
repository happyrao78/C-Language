#include<stdio.h>
void decreasing(int a){
    if(a==0) return;
            printf("%d\n",a);
    decreasing(a-1);
    return;
}
int main(){
    int x;
    printf("enter the x:");
    scanf("%d",&x);
    decreasing(x);
    return 0;
} 