// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.
#include <stdio.h>
#include <string.h>
int main(){
    int cnt=0;
    char input[10];
    char last='a';
    printf("enter input");
    scanf("%s",&input);
    int len= strlen(input);
    for(int i=0;i<len;i++){
        if(input[len-1]=last){
            cnt++;
        }
    }
if(cnt>0){
    printf("true");
}
else{
    printf("false");
}
}