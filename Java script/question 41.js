// 41. Given a valid IP address, you are asked to return a defanged version of that IP address. A defanged IP address replaces every period "." with "[.]".
// Example1:Input: address = "1.1.1.1" Output: "1[.]1[.]1[.]1"
// Example2:Input: address = "255.100.50.0" output: "255[.]100[.]50[.]0"
var input="1.1.1.1"
var len=input.length
for(i=0;i<len;i++){
    if(input[i]!="."){
        console.log(input[i])
    }
    else{
        console.log("[.]")
    }
}

