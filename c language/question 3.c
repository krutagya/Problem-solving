// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.
#include <stdio.h>
int main(){
    int sidea;
    printf("enter sidea");
    scanf("%d",&sidea);
    int sideb;
    printf("enter sideb");
    scanf("%d",&sideb);
    int sidec;
    printf("enter sidec");
    scanf("%d",&sidec);
    if(sidea==sideb && sideb==sidec && sidec==sidea){
        printf("it is a equilateral triangle");
    }
    else if(sidea==sideb || sideb==sidec || sidea==sidec){
        printf("it is a isosceles triangle");
    }
    else if(sidea!=sideb && sideb!=sidec && sidea!=sidec){
        printf("it is isosceles triangle");
    }
}