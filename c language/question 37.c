// 37. Given a sorted array and a target value, return the starting and ending position of that target in the array.Example:Input: [5, 7, 7, 8, 8, 10], target=8 ,Output: [3, 4]
#include <stdio.h>
int main(){
    int input[]={5,7,7,8,8,10};
    int target=8;
    int len=sizeof(input)/sizeof(input[0]);
    for(int i=0;i<len;i++){
        if(input[i]==target){
            printf("%d",i);
        }
    }
}