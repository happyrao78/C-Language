#include<stdio.h>

int main(){
    typedef struct one{
        int hindi;
        int english;
    }one;
    typedef struct two{
        one happy;
        int maths;
    }two;
    one happy;
    two hishita;
    printf("enter happy's hindi marks:");
    scanf("%d",&happy.hindi);
    printf("\nenter happy's english marks:");
    scanf("%d",&happy.english);
    printf("enter hindi marks of hishita:");
    scanf("%d",&hishita.happy.hindi);
    printf("enter the english marks of hishita :");
    scanf("%d",&hishita.happy.english);
    printf("enter the maths's marks of hishita :");
    scanf("%d",&hishita.maths);
    printf("happy's marks are:\n hindi:%d\n english :%d\n ",happy.hindi,happy.english);
        printf("hishita's marks are:\n hindi:%d\n english :%d\n maths:%d\n ",hishita.happy.hindi,hishita.happy.english,hishita.maths);

    return 0;
}