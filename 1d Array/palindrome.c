#include<stdio.h>
int palindrome(int arr[],int n){
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            return 0;
        }
    }
    return 1;
}
    

int main(){
    int n;
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=palindrome(arr,n);
    if (result==1) {
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }

    return 0;
}