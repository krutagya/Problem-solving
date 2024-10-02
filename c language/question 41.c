
#include <stdio.h>
#include <string.h>
int main(){
char input[]="1.1.1.1";
int len=strlen(input);
for(int i=0;i<len;i++){
    if(input[i]!='.'){
        printf("%c",input[i]);
    }
    else{
        printf("[.]");
    }
}
}