// 31. Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".
var string =prompt("enter input")
var int =prompt("enter the value how many times you want to repeat")
var temp=""
for(i=0;i<int;i++){
  temp=temp+string
}
console.log(temp)