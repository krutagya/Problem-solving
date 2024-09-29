// 31. Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".
#include <stdio.h>
#include <string.h>
int main(){
    char input[100];
    printf("enter input");
    scanf("%s",&input);
    int num;
    printf("enter number of times");
    scanf("%d",&num);
    char temp[100]="";
    for(int i=0;i<num;i++){
        strcat(temp,input);
    }
    printf("%s",temp);
    return 0;
}