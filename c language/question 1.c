// 1.Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F
#include <stdio.h>
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d", & marks);
    if(marks>=90 && marks<=100){
        printf("GRADE A");
    }
    else if(marks>=80 && marks<=89){
        printf("GRADE B");
    }
    else if(marks>=70 && marks<=79){
        printf("GRADE C");
    }
    else if(marks>=60 && marks<=69){
        printf("GRADE D");
    }
    else if(marks<60){
        printf("GRADE F");
    }
    else{
        printf("enter vaild marks");
    }
}
