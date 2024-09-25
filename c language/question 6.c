// 6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; toherwise, print "Login failed."
#include <stdio.h>
#include <string.h>
int main(){
    char username[5];
    printf("enter usename");
    scanf("%s",&username);
    int password;
    printf("enter password");
    scanf("%d",&password);
    if(username=="admin" && password==1234){
        printf("login successful");
    }
    else{
        printf("login fail");
    }
}
