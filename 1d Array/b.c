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
    bool unique_element_found = false;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            printf("%d is unique element\n",arr[i]);
            unique_element_found = true;
            break;
        }
        
    }
    
    if (!unique_element_found) {
        printf("No unique element found in the array.\n");
    }
    
    return 0;
}