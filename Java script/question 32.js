// 32.Write a program that categorizes a person’s age group based on the given age:
// Less than 13: "Child"
// Between 13 and 19: "Teenager"
// Between 20 and 59: "Adult"
// 60 and above: "Senior"
var age =prompt("Enter your age")
if(age=>60){
    console.log("Senior")
}
else if(age>20 && age<=59){
    console.log("Adult")
}
else if(age>13 && age<=19){
    console.log("Teenager")
}
else if(age<=13){
    console.log("Child")
}
else{
    console.log("input error pls try again")
}