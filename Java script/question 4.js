// 4. Write a function to check whether a given character is a vowel or consonant.
function vowelcheck(character){
    var vowelregex=/[aeiou]/gi;
    console.log(vowelregex.test(character));
}
vowelcheck("a")

or

function vowelcheck(character){
if(character=="a" || character=="e" || character=="i" || character=="o" || character=="u" || 
    character=="A" || character=="E" || character=="I" || character=="O" || character=="U" )
{
    console.log("yes it is vowel")
}
else{
    console.log("it is not a vowel")
}
}
vowelcheck("a")