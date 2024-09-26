    var odd=0;
    var even=0;
    var arr=[1,2,3,4,5];
    var len = arr.length
    for(var i=0;i<len;i++){
        if(arr[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
   console.log("even:",even)
   console.log("odd:",odd)

