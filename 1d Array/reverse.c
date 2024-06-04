#include<stdio.h>

void reverse(int arr[], int x){
    int i = 0;
    int j = x; // Error: Incorrect initialization of j
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j]; // Error: Index out of bounds, should be arr[j-1]
        arr[j] = temp; // Error: Index out of bounds, should be arr[i-1]
        i++;
        j--; // Error: Missing increment of j
    }
    return;

}

int main(){
    int x;
    printf("Enter size of array: ");
    scanf("%d", &x);
    int arr[x];
    for(int i = 0; i < x; i++){
        scanf("%d", &arr[i]);
    }

    // Error: Passing incorrect size to reverse function
    reverse(arr, x+1); 

    // Error: Incorrect loop condition, should be i <= x
    for(int i = 0; i < x; i++){
        printf("Reversed elements are %d\n", arr[i]);
    }
    return 0;
}
