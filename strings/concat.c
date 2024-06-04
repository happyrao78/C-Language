#include<stdio.h>
#include<string.h>
int main(){
    int x,y;
    printf("enter first string size:");
    scanf("%d",&x);
    getchar();
    char str1[x+1];
    printf("enter first string:");
    fgets(str1,x+1,stdin);
    puts(str1);
    getchar();
    printf("enter size of second string:");
    scanf("%d",&y);
    getchar();
    char str2[y+1];
    printf("enter the second string:");
    fgets(str2,y+1,stdin);
    puts(str2);
    getchar();
    for(int i=0;i<y;i++){
        str1[x+i]=str2[i];
    }
    str1[x+y]='\0';
printf("concatenated string is %s",str1);           
    return 0;
}