// 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

var arr=[3,-2,9,1,7]
var len=arr.length
var cnt=0;
for(var i=0;i<len;i++){
    if(arr[i]<0){
        cnt++
    }
}
if(cnt==0){
    console.log("true")
}
else{
    console.log("false")
}