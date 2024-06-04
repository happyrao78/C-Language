#include<stdio.h>
#include<string.h>
int main(){
    int n,x;
    printf("enter no. of inputs:");
    scanf("%d",&n);
 printf("enter no. of characters:");
    scanf("%d",&x);
 getchar();//or removing buffer space {agar ye use nhi kruga to era input ek extra bar print hojayega}
    char str[n][x];
    for(int i=0;i<n;i++){
        printf("Enter string %d:",i);
        scanf("%s",str[i]);
    }
    for(int i=0;i<n;i++){
        printf("%s \n",str[i]);
    }
    return 0;
}