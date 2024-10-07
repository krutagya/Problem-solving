// 47. Given an array of integers, find the first element that repeats. If no element repeats, return -1.
// Input: [10, 5, 3, 4, 3, 5, 6]
// Output: 5
// #include <stdio.h>
// int main(){
//     int arr[]={10,5,3,4,3,5,6};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int cnt=0;
//     for(int i=0;i<len;i++){
//         for(int j=i+1;j<len;j++){
//             if(arr[i]==arr[j]){
//                 printf("%d",arr[i]);
//                 cnt++;
//                 break;
//             }
//         }
//     if(cnt>0){
//         break;
//     }
//     }
// if(cnt==0){
//     printf("-1");
// }
// }
