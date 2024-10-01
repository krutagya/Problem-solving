// 43. The "Max Consecutive Ones" problem is a common algorithmic challenge that involves finding the maximum number of consecutive 1s in a binary array.
// Problem Statement Given a binary array, find the maximum number of consecutive 1s in the array.
// Example
// Input: [1, 1, 0, 1, 1, 1]
// Output: 3 (the longest sequence of 1s is 111)
// var input=[1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,]
// var len=input.length
// var cnt=0;
// var cntmax=0
// var i=0;
// while(i<len){
//     if(input[i]=="0"){
//         cntmax=cnt
//         cnt=0
//     }
//     else if(input[i]=="1"){
//         cnt++
//     }
//     i++
   
// }
// console.log(cntmax)

// function maxConsecutiveOnes(binaryArray) {
//     let maxCount = 0;      
//     let currentCount = 0;   
    
//     for (let i = 0; i < binaryArray.length; i++) {
//         if (binaryArray[i] === 1) {
//             currentCount++;  
//         } else {
            
//             if (currentCount > maxCount) {
//                 maxCount = currentCount;
//             }
//             currentCount = 0; 
//         }
//     }
//     if (currentCount > maxCount) {
//         maxCount = currentCount;
//     }
//     return maxCount;
// }
// console.log(maxConsecutiveOnes( [1,0,1,0,1,1,0]));
