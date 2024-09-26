// 20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].
#include <stdio.h>
int main(){
int arr[5]={80,10,90,50,20};
int len=sizeof(arr)/sizeof(arr[0]);
int cntmax=arr[0];
int cntmin=arr[0];
for(int i=0;i<len;i++){
    if(arr[i]>cntmax){
        cntmax=arr[i];
    }
    else if(arr[i]<cntmin){
        cntmin=arr[i];
    }
}
float different=cntmax-cntmin;
printf("%.1f",different);
}