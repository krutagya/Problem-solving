// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.
function triangle(sidea,sideb,sidec){
    if(sidea==sideb && sideb==sidec && sidec==sidea){
        console.log("it is a equilateral triangle")
    }
    else if(sidea==sideb || sideb==sidec || sidea==sidec){
        console.log("it is a isosceles triangle")
    }
    else if(sidea!=sideb && sideb!=sidec && sidea!=sidec){
        console.log("it is isosceles triangle")
    }
}
triangle(12,5,10)