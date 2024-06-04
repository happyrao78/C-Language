#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[50];
        int age;
        float avg_runs;
    }cricket;
    int x;
    printf("enter the no. of cricketers:");
    scanf("%d",&x);
    getchar();
    cricket arr[x];
    for(int i=0;i<x;i++){
        printf("\nEnter the details of Cricketer %d:\n",i+1);
        printf("name:");
        fgets(arr[i].name,50,stdin);
        printf("age:");
        scanf("%d",&arr[i].age);
        getchar();
        printf("avg runs:");
        scanf("%f",&arr[i].avg_runs);
        getchar();
    }
    for(int i=0;i<x;i++){
        printf("name:%s\n",arr[i].name);
        printf("\nage:%d\n",arr[i].age);
        printf("\naverage runs:%.1f\n",arr[i].avg_runs);
    }
    return 0;
}






