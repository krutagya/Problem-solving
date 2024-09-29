// 29.Write a program to find all pairs in an array whose sum is equal to a given number.
// Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].
var arr=[2,7,11,15]
var target=13
var len=arr.length
var sum=0;
var output=[]
for(i=0;i<len;i++){
    for(j=0;j<len;j++){
        if(arr[i]+arr[j]==target){
            output.push(i)
        }
    }
}
console.log(output)