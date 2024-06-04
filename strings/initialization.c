#include<stdio.h>

int main(){
    char ch[]="Hi Happy Yadav";
    ch[4]=65;
    for(int i=0;ch[i]!='\0';i++){
        printf("%c",ch[i]);

    }
    return 0;
}