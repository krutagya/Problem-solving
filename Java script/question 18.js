// 18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50].
var arr = [10, 20, 30, 40, 50]
var len=arr.length
for(i=1;i<len;i++){
    if(i%2==0){
        console.log(arr[i])
    }
}