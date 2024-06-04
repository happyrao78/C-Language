#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[100];
    char dept[10];
    int year;
}student;
void check(student std1,student std2){
if(strcmp(std1.dept,std2.dept)==0){
    printf("Both students are from the same department.\n");
}
else{
    printf("no matching cridentials found in entered data by you");
}
}
int main(){
    student std1,std2;
    printf("enter the name of first student :");
    fgets(std1.name,100,stdin);
    printf("\n enter the department of first student: ");
    fgets(std1.dept,10,stdin);
    printf("enter the grauduation year:");
    scanf("%d",&std1.year);
    getchar();
    printf("enter the name of second student :");
    fgets(std2.name,100,stdin);
    printf("\n enter the department of second student: ");
    fgets(std2.dept,10,stdin);
    printf("enter the grauduation year:");
    scanf("%d",&std2.year);
    printf("details of first student :\n name:%s\n department:%s\n year:%d\n",std1.name,std1.dept,std1.year);
        printf("details of second student :\n name:%s\n department:%s\n year:%d\n",std2.name,std2.dept,std2.year);
        check(std1,std2);

    return 0;
}

