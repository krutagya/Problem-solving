// 17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.
#include <stdio.h>
int main(){
    int arr[]={1,-2,3,-4,5,-6};
    int len=sizeof(arr)/sizeof(arr[0]);
    int cntp=0;
    int cntn=0;
    for(int i=0;i<len;i++){
        if(arr[i]>0){
            cntp++;
        }
        else if(arr[i]<0){
            cntn++;
        }
    }
printf("positive number:""%d",cntp);
printf("negetive number""%d",cntn);
return 0;
}


