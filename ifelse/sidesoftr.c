#include<stdio.h>

int main(){
    int x,y,z;
    printf("enter the sides:");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>z || y+z>x || z+x>y){
        printf("possible triangle");
    }
    else{
        printf("not possible");
    }
    return 0;
}