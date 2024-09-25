// 1.Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

function grade(marks){
    if(marks>=90 && marks<=100){
        console.log("GRADE A")
    }
    else if(marks>=80 && marks<=89){
        console.log("GRADE B")
    }
    else if(marks>=70 && marks<=79){
        console.log("GRADE C")
    }
    else if(marks>=60 && marks<=69){
        console.log("GRADE D")
    }
    else if(marks<60){
        console.log("GRADE F")
    }
    else{
        console.log("enter vaild marks")
    }
}
grade(55)


