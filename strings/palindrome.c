#include<stdio.h>
//#include<string.h> // Error: Missing include directive for <string.h>

int main(){
    int x, i, j;
    printf("Enter the size of string: ");
    scanf("%d",&x);
    getchar();
    // Error: Variable-length array declaration is not supported in standard C
    char str[x+1];
    printf("Enter string: ");
    // Error: Using fgets to read string, which includes newline character
    fgets(str,x+1,stdin);
    puts(str);
    // Error: Incorrect calculation of string length
    int length = strlen(str);
    // Error: Initialize i and j incorrectly
    for(i = 0, j = length - 1; i <= j; i++, j++){ // Error: Incorrectly incrementing j
        // Error: Incorrect condition to check palindrome
        if(str[i] != str[j]){
            printf("Not a palindrome string\n");
            return 0;
        }
    }
    printf("Palindrome string\n");
        
    return 0;
}
