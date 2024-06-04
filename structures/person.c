#include<stdio.h>
  struct person{
        char name[50];
        int age;
        float salary;
    }a,b;
int main(){
  
    printf("enter the name of first person:\n");
    fgets(a.name,50,stdin);
    printf("\nenter the age of person:");
    scanf("%d",&a.age);
    printf("enter the salary:\n");
    scanf("%f",&a.salary);
    printf("name is:%s\n",a.name);
    printf("\nage is:%d",a.age);
    printf("\nsalary is:%f",a.salary);
    getchar();

     printf("enter the name of second person:\n");
    fgets(b.name,50,stdin);
    printf("\nenter the age of person:");
    scanf("%d",&b.age);
    getchar();
    printf("enter the salary:\n");
    scanf("%f",&b.salary);
    printf("name is:%s\n",b.name);
    printf("\nage is:%d",b.age);
    printf("\nsalary is:%.1f",b.salary);

    return 0;
}