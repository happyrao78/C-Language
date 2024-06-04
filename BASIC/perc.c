#include<stdio.h>

int main(){
    float m1,m2,m3,m4,m5;
    printf("enter marks:");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
float percentage=(m1+m2+m3+m4+m5)/5;
printf("results :%.1f",percentage);
    return 0;
}