// 54. An ugly number is a positive integer whose prime factors only include 2, 3, and 5. Given an integer n, write a program to determine if n is an ugly number.
// Example:
// Input: n = 6
// Output: true
// Input: n = 8
// Output: true
// Input: n = 14
// Output: false
// Input: n = 1
// Output: true
#include <stdio.h>
int main(){
int number=14;
int condition[]={2,3,5};
int len=sizeof(condition)/sizeof(condition[0]);
for(int i=0;i<len;i++){
    if(number%condition[i]==0){
        number=number/condition[i];
    }
}
if (number == 1) {
        printf("is an ugly number");
    } else {
        printf(" is not an ugly number.");
    }
}
