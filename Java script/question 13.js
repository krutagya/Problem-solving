// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.
var arr=[1,2,3,4,5]
var len=arr.length
var cnt=0;
for(i=0;i<len;i++){
    if(arr[i]=="3"){
        cnt++
    }
}
if(cnt>0){
console.log(true)
}
else{
    console.log(false)
}