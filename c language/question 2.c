// 2. Write a function to determine whether a given number is positive, negative, or zero.
#include <stdio.h>
int main(){
    int num;
    printf("enter number");
    scanf("%d",&num);
    if(num>0){
        printf("it is a positive number");
    }
    else if(num<0){
        printf("it is a negetive number");
    }
    else if(num==0){
        printf("num is 0");   
    }
    else{
        printf("enter valied number");
    }
}