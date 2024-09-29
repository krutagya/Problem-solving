// 27. Write a program to extract the file extension from a given filename.Example: Input: "document.pdf", Output: "pdf".
var input=prompt("enter input")
var len=input.length
var temp=0
var output=""
for(i=0;i<len;i++){
    if(input[i]=="."){
        temp=i;
    }
}
for(j=temp+1;j<len;j++){
    output=output+input[j]
}
console.log(output)