// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: 'n' = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9

// var n =prompt("enter number")
var num=prompt("entter number")
var sum_even=0
var sum_odd=0
if(num<0){
    num=-num;
}
while(num>0){
    let digit=num%10;
    num=Math.floor(num/10);
    if(digit%2==0){
        sum_even=sum_even+digit;
    }
    else{
        sum_odd=sum_odd+digit;
    }
}
console.log("Sum of even digits:",sum_even);
console.log("Sum of odd digits:",sum_odd);


