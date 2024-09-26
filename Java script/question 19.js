// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.
var arr=[1,2,3,4,5]
var len=arr.length
var cnt=0;
for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
        if(arr[i]>arr[j]){
            cnt++
        }
    }
}
if(cnt==0){
    console.log("true")
}
else{
    console.log("false")
}