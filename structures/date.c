#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
    int day;
    int month;
    int year;
}date;
date a,b;
printf("enter the day 1:\n");
scanf("%d",&a.day);
printf("enter the month 1:\n");
scanf("%d",&a.month);
printf("enter the year 1:\n");
scanf("%d",&a.year);
printf("enter the day 2:\n");
scanf("%d",&b.day);
printf("enter the moonth 2:\n");
scanf("%d",&b.month);
printf("enter the year 2:\n");
scanf("%d",&b.year);
printf("first date is:\n %d / %d / %d\n",a.day,a.month,a.year);
    printf("second date is:\n %d / %d / %d",b.day,b.month,b.year);
    bool  flag=true;
    if(a.day!=b.day){
        flag=false;
    }
    if(a.month!=b.month){
        flag=false;
    }
    if(a.year!=b.year){
        flag=false;
    }
if(flag==true){
    printf("\ndates are same\n");
}
else{
    printf("\ndates are different\n");
}
    

    return 0;
}