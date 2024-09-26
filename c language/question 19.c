// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.
#include <stdio.h>
int main(){
int arr[]={1,2,3,4,5};
int len=sizeof(arr)/sizeof(arr[0]);
int cnt=0;
for(int i=0;i<len;i++){
    for(j=i+1;j<len;j++){
        if(arr[i]>arr[j]){
            cnt++;
        }
    }
}
if(cnt==0){
    printf("true");
}
else{
    prinntf("false");
}
return 0;
}