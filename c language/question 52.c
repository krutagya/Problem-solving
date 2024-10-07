// 52.Given an array nums, the running sum of an array is defined as runningSum[i] = sum(nums[0]…nums[i]).
// Example:
// Input: nums = [1, 2, 3, 4]
// Output: [1, 3, 6, 10]
// Explanation:
// runningSum[0] = 1
// runningSum[1] = 1 + 2 = 3
// runningSum[2] = 1 + 2 + 3 = 6
// runningSum[3] = 1 + 2 + 3 + 4 =10
#include <stdio.h>
int main(){
int input[]={1,2,3,4};
int len=sizeof(input)/sizeof(input[0]);
char output[]={};
int x=0;
int sum=0;
for(int i=0;i<len;i++){
    sum=sum+input[i];
    output[x]=sum;
    x++;
}
int len2=sizeof(output)/sizeof(output[0]);
for(int j=0;j<len2;j++){
    printf("%d",j);
}
}