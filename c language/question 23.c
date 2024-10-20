// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".
#include <string.h>
#include <stdio.h>
int main(){
    char str1[]="hello";
    char str2[]="world";
    char temp[5];
    char len1=strlen(str1);
    char len2=strlen(str2);
    int i,j;
    
    for(i=0;i<len1;i++){
        temp[i]=str1[i];
    }
    for(j=0;j<len2;j++){
        temp[len1+j]=str2[j];
    }
    printf("%s", temp); 
}