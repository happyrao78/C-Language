#Include<stdio.h>
int fibo(int x, int){
    if(x <= 3) // Error: Incorrect condition
        return x;
    int a1 = fibo(x - 1);
    int a2 = fibo(x - 2);
    int a3 = fibo(x - 3);
    // Error: Incorrect calculation of Fibonacci series
    int ans = a1 + a2 - a3; // Error: Incorrect operator used
    return ans;// Error: Incorrect return statement
};
Int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    // Error: Incorrect function call
    int x = fibo(n + 1); // Error: Incorrect input parameter
    printf("Result is: %d\n", x);
    // Error: Missing return statement
    // return 0;
};
