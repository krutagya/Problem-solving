// 43. The "Max Consecutive Ones" problem is a common algorithmic challenge that involves finding the maximum number of consecutive 1s in a binary array.
// Problem Statement Given a binary array, find the maximum number of consecutive 1s in the array.
// Example
// Input: [1, 1, 0, 1, 1, 1]
// Output: 3 (the longest sequence of 1s is 111)
#include <stdio.h>
int main(){
int input[]={1,1,1,0,1,1,1,1,1,0,1,1,1,1,0};
int len=sizeof(input)/sizeof(input[0]);
int cnt=0;
int cntmax=0;
for(int i=0;i<len;i++){
    if(input[i]==1){
        cnt++;
    }
    else{
        cnt=0;
    }
    if(cnt>cntmax){
        cntmax=cnt;
    }
}
printf("%d",cntmax);
}
