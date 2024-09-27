// 25. Write a program to split a string into an array of words.
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="krutagya";
    char arr[8]={};
    int len=strlen(str);
    for(int i=0;i<len;i++){
        arr[i]=str[i];
    }
    int len2=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<len2;j++){
     printf("%c",arr[j]);
    }
return 0;
}



