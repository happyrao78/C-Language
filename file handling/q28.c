#include<stdio.h>
#include<stdlib.h>
int main(){
    struct employee{
        char name[100];
        int phone;
        float salary;
    }emp1;
    FILE*fptr=fopen("employee.bin","rb");
    if(fptr==NULL){
        printf("error in loading file");
    }
    else{
        printf("created successfully");
    }
    printf("\nenter name of employee:");
    fgets(emp1.name,100,stdin);
    getchar();
    printf("phone no.:");
    scanf("%d",&emp1.phone);
    printf("enter salary");
    scanf("%f",&emp1.salary);
    fwrite(&emp1,sizeof(emp1),1,fptr);
    fread(&emp1,sizeof(emp1),1,fptr);
printf("\nname:%s",emp1.name);
printf("\nphone:%d",emp1.phone);
printf("\nsalary:%.1f",emp1.salary);
    fclose(fptr);
    printf("\ndetails added to the binary file employee.bin");
    printf("\n file closed");
    
    return 0;
}