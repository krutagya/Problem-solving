// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].
// var array=[1,2,3,4]
// var output=array.unshift(0)
// console.log(array)

// or

var array=[1,2,3,4]
var len=array.length
for(i=len;i>0;i--){
    array[i]=array[i-1]
}
array[0]=0;
console.log(array)