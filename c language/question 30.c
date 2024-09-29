// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: 'n' = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9
#include <stdio.h>
int main(){
    int num;
    printf("enter number");
    scanf("%d",&num);
    int sumodd=0;
    int sumeven=0;
    while(num>0){
        int digit=num%10;
        num=num/10;
        if(digit%2==0){
            sumeven+=digit;
        }
        else{
            sumodd+=digit;
        }
    }
printf("sum of even digits: %d\n",sumeven);
printf("sum of odd digits: %d\n",sumodd);
return 0;
}