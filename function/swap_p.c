#include<stdio.h>
void swap(int *a,int *b){
int temp =*a;
*a=*b;
*b=temp;

}

int main(){
    int x,y;
    printf("enter x and y:");
    scanf("%d%d",&x,&y);
    printf("x=%d,y=%d\n",x,y);
    swap(&x,&y);
        printf("x=%d,y=%d",x,y);

    return 0;
}