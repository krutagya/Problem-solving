// 27. Write a program to extract the file extension from a given filename.Example: Input: "document.pdf", Output: "pdf".
#include <stdio.h>
#include <string.h>
int main(){
    char input[50];
    printf("enter input");
    scanf("%s",&input);
    int len=strlen(input);
    char temp[50];
    char output[50];
    for(int i=0;i<len;i++){
        if(strcmp(input[i],'.')==0){
            temp[50]=i;
        }
    }
for(int j=temp;j<len;j++){
    output[50]=output+input[j];
}
printf("%s",output);
}