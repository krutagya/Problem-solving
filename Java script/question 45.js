// 45. Given a sentence, return the longest word in it.
// Input: "I love programming in JavaScript"
// Output: "programming"
// var input ="I love programming in JavaScript"
// var len=input.length
// var cnt=0
// var cntmax=0
// var output=""
// for(i=0;i<len;i++){
//     if(input[i]!=" "){
//         cnt++
//     }
//     else{
//         cnt=0
//     }
//     output=output+input[i]
//     if(cnt>cntmax){
//         cntmax=cnt
//        }
//     }
// console.log(output)


// var input ="I love programming in JavaScript"
// var len=input.length
// var arr=[]

// var cnt=0
// var cntmax=0
// var output=""
// for(i=0;i<len;i++){
//     if(input[i]==" "){
//         arr.push(i)
//     }
// }
// var start=0
// var end=0
// maxdiff=Math.abs(arr[0]-arr[1])
// for(j=0;j<arr.length;j++){
//     var diff=Math.abs(arr[j+1]-arr[j])
//     if(diff>maxdiff){
//         maxdiff=diff
//         start=j
//         end=j+1
//     }
// }
// for(k=arr[start];k<arr[end];k++){
//     console.log(input[k])
// }