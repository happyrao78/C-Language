#include<stdio.h>
int main(){
    struct student{
        int rollno;
        char section;
        float weight;
    };
    struct student happy;
    printf("Enter the Roll No: ");
    scanf("%d",&happy.rollno);
    getchar();
    printf("Enter the section: ");
    scanf("%c",&happy.section);
    printf("Enter the weight: ");
    scanf("%f",&happy.weight);
    printf("%d\n",happy.rollno);
         printf("%c\n",happy.section);
    printf("%.1f\n",happy.weight);

    return 0;
}