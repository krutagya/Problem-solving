// 39. Given a string, check if all brackets are closed properly. Example:Input: "{[()]}" Output: true
var input="[{()}]"
var len=input.length
var cnt1=0
var cnt2=0
var cnt3=0
for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
    if(input[i]=="("){
        cnt1++
    }
    else if(input[i]=="["){
        cnt2++
    }
    else if(input[i]=="{"){
        cnt3++
    }
    if(input[j]==")"){
        cnt1--
    }
    else if(input[j]=="]"){
        cnt2--
    }
    else if(input[j]=="}"){
        cnt3--
    }
}
}
if(cnt1==0 && cnt2==0 && cnt3==0){
    console.log("true")
}
else{
    console.log("false")
}