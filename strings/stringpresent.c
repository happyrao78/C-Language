#include<stdio.h>
#include<string.h>
int main(){
    int n,x,z;
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
    getchar();
    printf("now enter the size of string you want to find");
    scanf("%d",&z);
    getchar();
    char str1[z+1];
    printf("enter string to find:");
    fgets(str1,z+1,stdin);
    puts(str1);
    for(int i=0;i<n;i++){
    if(strcmp(str[i],str1)==0){
        printf("found");
        return 0;
    }
    }
    printf("not found");
    return 0;
}