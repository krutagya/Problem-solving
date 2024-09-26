// 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.
#include <stdio.h>
int main(){
    int arr[]={3,5,9,1,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    int cnt=0;
    for(int i=0;i<len;i++){
        if(arr[i]<0){
            cnt++;
        }
    }
if(cnt==0){
    printf("true");
}
else{
    printf("false");
}
}
