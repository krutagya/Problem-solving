// 29.Write a program to find all pairs in an array whose sum is equal to a given number.
// Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].
#include <stdio.h>
int main(){
    int arr[]={2,7,11,15};
    int target=9;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(arr[i]+arr[j]==target){
                printf("true");
            }
        }
    }
}
