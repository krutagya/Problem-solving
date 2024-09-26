// 20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].
var arr=[80,10,90,50,20]
var len=arr.length
var cntmax=arr[0]
var cntmin=arr[0]
for(i=0;i<len;i++){
    if(arr[i]>cntmax){
        cntmax=arr[i]
    }
    else if(arr[i]<cntmin){
        cntmin=arr[i]
    }
}
var difference=cntmax-cntmin
console.log(difference)
