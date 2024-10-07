// 52.Given an array nums, the running sum of an array is defined as runningSum[i] = sum(nums[0]…nums[i]).
// Example:
// Input: nums = [1, 2, 3, 4]
// Output: [1, 3, 6, 10]
// Explanation:
// runningSum[0] = 1
// runningSum[1] = 1 + 2 = 3
// runningSum[2] = 1 + 2 + 3 = 6
// runningSum[3] = 1 + 2 + 3 + 4 =10
var input=[1,2,3,4]
var len=input.length
var output=[]
var sum=0
for(i=0;i<len;i++){
    sum=sum+input[i]
    output.push(sum)
}
console.log(output);