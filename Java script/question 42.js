// 42. Given two lists of events. Each event is represented by a start time and an end time. You need to determine if the two events conflict, which means if the events overlap in time.
// Input Format:
// Each event is represented by a list [start, end], where start is the start time (inclusive) and end is the end time (exclusive).
// The events are represented as two arrays: event1 and event2.
// Output:
// Return true if there is a conflict between the two events; otherwise, return false.
// Example 1: Input: event1 = [1, 5], event2 = [5, 10] Output: false,  Exampe 2:  Input: event1 = [1, 5], event2 = [2, 3] Output: true.
// var event1=[1,5]
// var event2=[5,10]
// var len1=event1.length
// var len2=event2.length
// var cnt=0
// for(i=event1[0];i<=event1[len1-1];i++){
//     for(j=event2[0];j<=event2[len2-1];j++){
//         if(i==j){
//             cnt++
//         }
//         else if(event1[len1-1]==event2[0]){
//             cnt--
//         }
//     }
// }
// if(cnt>0){
//     console.log("true")
// }
// else{
//     console.log("false")
// }


// ---------or---------

var event1=[1,5]
var event2=[2,3]
if(event2[0]>=event1[1] && event2[1]>event2[0]){
    console.log("false");
}
else{
    console.log("true");
}
