#include<stdio.h>

int main(){
    int x;
    printf("enter the no. lines:");
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
        for(int space=0;space <=x-i;space++){
            printf(" ");
        }
        int first =1;
        for(int j=0;j<=i;j++){
                        printf("%d ",first);

            first = first *(i-j)/(j+1);
    }
    printf("\n");
    }
    return 0;
}
