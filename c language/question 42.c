// 42. Given two lists of events. Each event is represented by a start time and an end time. You need to determine if the two events conflict, which means if the events overlap in time.
// Input Format:
// Each event is represented by a list [start, end], where start is the start time (inclusive) and end is the end time (exclusive).
// The events are represented as two arrays: event1 and event2.
// Output:
// Return true if there is a conflict between the two events; otherwise, return false.
// Example 1: Input: event1 = [1, 5], event2 = [5, 10] Output: false,  Exampe 2:  Input: event1 = [1, 5], event2 = [2, 3] Output: true.
// #include <stdio.h>
// int main(){
//     int event1[]={1,5};
//     int event2[]={2,3};
//     int cnt=0;
//     int len1=sizeof(event1)/sizeof(event1[0]);
//     int len2=sizeof(event2)/sizeof(event2[0]);
//     for(int i=event1[0];i<=event1[len1-1];i++){
//     for(int j=event2[0];j<=event2[len2-1];j++){
//         if(i==j){
//             cnt++;
//         }
//         else if(event1[len1-1]==event2[0]){
//             cnt--;
//         }
//     }
// }
// if(cnt>0){
//     printf("true");
// }
// else{
//     printf("false");
// }
// }


// -----------or-----------

// #include <stdio.h>
// int main(){
//     int event1[]={1,5};
//     int event2[]={5,10};
// if(event2[0]>=event1[1] && event2[1]>event2[0]){
//     printf("false");
// }
// else{
//     printf("true");
// }
// }