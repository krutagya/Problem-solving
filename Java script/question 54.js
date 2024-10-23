// 54. An ugly number is a positive integer whose prime factors only include 2, 3, and 5. Given an integer n, write a program to determine if n is an ugly number.
// Example:
// Input: n = 6
// Output: true
// Input: n = 8
// Output: true
// Input: n = 14
// Output: false
// Input: n = 1
// Output: true

var number=14
var condition=[2,3,5]
var len=condition.length
for(i=0;i<len;i++){
    if(number%condition[i]===0){
        number=number/condition[i];
    }
}
if (number === 1) {
        console.log("is an ugly number");
    } else {
        console.log(" is not an ugly number.");
    }