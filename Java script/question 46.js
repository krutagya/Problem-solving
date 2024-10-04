// 46. Given a string, return the index of the first repeating character. If no character repeats, return -1.
// Input: "hello"
// Output: 2 (because 'l' repeats first)
// Input: "abcdef"
// Output: -1
var input="helloo"
var len=input.length
var cnt=0
var condition=false
for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
        if(input[i]==input[j]){
            console.log(i)
            condition=true
            break
            
        }
    }
    if(condition==true){
        break
    }
}
if(condition==false){
    console.log("-1")
}
