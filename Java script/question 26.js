// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.
var input=prompt("enter input")
var last="a"
var cnt=0;
var len=input.length
for(i=0;i<len;i++){
    if(input[len-1]==last){
        cnt++
    }
}
if(cnt>0){
    console.log(true)
}
else{
    console.log(false)
}