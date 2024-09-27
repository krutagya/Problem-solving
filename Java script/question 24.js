// 24. Write a program to remove whitespace from both ends of a string.Example: Input: " hello ", Output: "hello".
var input=" hello "
var  len=input.length
var temp=""
for(i=0;i<len;i++){
    if(input[i]==" "){
        temp=temp
    }
    else{
        temp=temp+input[i]
    } 
}
console.log(temp)