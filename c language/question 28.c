// 28. Write a function that takes two numbers and prints the largest one.
#include <stdio.h>
int main(){
    float num1;
    printf("enter number 1:");
    scanf("%f",&num1);
    float num2;
    printf("enter number 2:");
    scanf("%f",&num2);
    if(num1>num2){
        printf("num1 is the largest number");
    }
    else if(num2>num1){
        printf("num2 is the largest number");
    }
    else{
        printf("both number are equal");
    }
return 0;
}
