// 34. Access and print the first and last element of the array arr = [0,10, 20, 30, 40, 50,60].
#include <stdio.h>
int main(){
    int arr[]={10,20,30,40,50,60};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
    }
    printf("%d",arr[0]);
    printf("%d",arr[len-1]);
}