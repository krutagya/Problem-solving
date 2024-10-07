
// 44. Given a string, return all possible substrings of that string. This includes all substrings of every length, from length 1 to the length of the string itself.
// Example:
// Input: "abc"
// Output: ["a", "ab", "abc", "b", "bc","c"]
var input="abc"
var len=input.length
var output=[]
var temp;
for(i=0;i<len;i++){
    temp=""
    for(j=i;j<len;j++){
        temp=temp+input[j]
        output.push(temp)
    }
}
console.log(output)