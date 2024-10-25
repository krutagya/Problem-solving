// 51. Given two arrays, one containing keys and the other containing values, create an object that combines them.
var keys = ['name', 'age', 'city']
var values = ['Alice', 30, 'New York']
const combinedobject={}
for(var i=0;i<keys.length;i++){
    combinedobject[keys[i]]=values[i]
}
console.log(combinedobject)