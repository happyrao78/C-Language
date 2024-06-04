#include <stdio.h>
#include <string.h>

int main() {
    // Writing to a file
    FILE *ptr = fopen("happy.txt", "w");
    if (ptr == NULL) {
        printf("Error in opening file\n");
        return 0;
    }
    printf("Enter string in first file: ");
    char str[100];
    fgets(str, 100, stdin);
    fputs(str, ptr);
    fclose(ptr);

    // Reading from a file and printing it
    FILE *ptr2 = fopen("happy2.txt", "w");
    if (ptr2 == NULL) {
        printf("Error in opening file\n");
        return 0;
    }
    printf("File opened successfully\n");
    char str2[100];
    ptr = fopen("happy.txt", "r");
    if (ptr == NULL) {
        printf("Error in opening file\n");
        return 0;
    }
    while (fgets(str2, 100, ptr) != NULL) {
        fputs(str2, ptr2);
    }

    fclose(ptr);
    fclose(ptr2);
    return 0;
}
