#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
     printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                flag=true;
                }
        }
        if(flag==false){
        printf("%d is unique element",arr[i]);
        break;//taki sirf ek hi unique element bta sake esliye hum break use krre hai yaha pe
    }
    }
    return 0;
}