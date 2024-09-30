// 40. Given two numbers, generate an array containing all numbers between them (inclusive). Example: Input: 1,5 Output: [1, 2, 3, 4, 5]
#include <stdio.h>
int main(){
    int num1;
    printf("enter starting number");
    scanf("%d",&num1);
    int num2;
    printf("enter ending number");
    scanf("%d",&num2);
    for(int i=num1;i<=num2;i++){
        printf(i);
    }
}
