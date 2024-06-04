#include<stdio.h>

int main(){
    int x;
    printf("enter the no. of students:");
    scanf("%d",&x);
    int marks[x];
    printf("enter the marks of %d students",x);
    for(int i=0;i<x;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<x;i++){
        printf("%d ",marks[i]);
    }
    int count[6]={0};
    for(int i=0;i<x;i++){
        if(marks[i]>=0 && marks[i]<=9){
            count[0]++;
        }
        if(marks[i]>=10 && marks[i]<=20){
            count[1]++;
        }
        if(marks[i]>=21 && marks[i]<=30){
            count[2]++;
        }
        if(marks[i]>=31 && marks[i]<=40){
            count[3]++;
        }
    }
    printf("\nNumber of students belonging to each group of marks:\n");
    printf("0-9: %d\n", count[0]);
    printf("10-19: %d\n", count[1]);
    printf("20-29: %d\n", count[2]);
    printf("30-39: %d\n", count[3]);
    return 0;
}