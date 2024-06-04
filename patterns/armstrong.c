#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    int ld=0;
    int sum=0;
    int temp=num;
while(num!=0){
    ld =num%10;
     sum +=ld*ld*ld;
    num /=10;
}
if(sum==temp){
    printf("%d is armstrong number",temp);

}
else{
    printf("%d not an armstrong number",temp);
}
    return 0;
}