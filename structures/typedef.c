#include<stdio.h>
typedef int* pointer;
int main(){
    int x=5,y=9;
    pointer a=&x,b=&y;
    printf("%d\n",a);
        printf("%d",b);

    
    return 0;
}