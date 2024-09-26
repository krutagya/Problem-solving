// 17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.
var arr = [1, -2, 3, -4, 5, -6,]
var len=arr.length
var cnt1=0
var cnt2=0
for(var i=0;i<len;i++){
    if(arr[i]>0){
        cnt1++
    }
    else if(arr[i]<0){
        cnt2++
    }
    else{
        console.log("it has 0")
    }
}
console.log("postive:",cnt1)
console.log("Negetive:",cnt2)