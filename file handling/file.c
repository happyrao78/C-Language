#include<stdio.h>

int main(){
    //writing in a file 
    FILE*ptr=fopen("happy.txt","w");
    char str[100];
    printf("enter your text:");
    fgets(str,100,stdin);
   fputs(str,ptr);
   fclose(ptr);
   //reading from a file and printing it 
       FILE*ptr2=fopen("happy.txt","r");

   while(fgets(str,100,ptr2)!=NULL){
    printf("%s",str);
   }
   fclose(ptr2);
    return 0;
}