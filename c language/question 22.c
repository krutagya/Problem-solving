// 22. Write a program to find the length of a given string.
#include <stdio.h>
#include <string.h>
int main(){

char string[]="krutagya";
int cnt=0;
int i=0;
while(string[i]!='\0'){
    cnt++;
    i++;
}
printf("%d",cnt);
}
