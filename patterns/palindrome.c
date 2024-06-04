#include<stdio.h>

int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    int ld=0;
    int rev=0;
    int sum=0;
    int temp=num;
    while(temp!=0){
        ld =temp%10;
        rev= (rev*10)+ld;
        sum +=ld;
        temp /=10;
    }
    printf("reversed number is: %d and sum is : %d\n",rev,sum);
if(num==rev){
    printf("%d is palindrome number",num);
}
else{
    printf("%d not palindrome number",num);
}
    return 0;
}