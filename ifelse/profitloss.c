#include<stdio.h>

int main(){
    int cp,sp;
    printf("enter cost price:");
    scanf("%d",&cp);
    printf("enter the selling price:");
    scanf("%d",&sp);
    if(sp==cp)
    printf("no loss no  profit");
    if(sp>cp){
        printf("profit of %d",sp-cp);
    }
   else{
    printf("loss of %d",cp-sp);
   }
    return 0;
}