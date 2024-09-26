// 8. Find the Average of an Array.
var arr=[1,2,3,4]
var avg;
var sum=0
var len=arr.length
for(i=0;i<len;i++){
    sum=sum+arr[i]
    avg=sum/len
}
console.log(avg)