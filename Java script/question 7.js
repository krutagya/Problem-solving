// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"
function traficlight(light){
    if(light=="red"){
        console.log("STOP")
    }
    else if(light=="yellow"){
        console.log("Slow down")
    }
    else if(light=="green"){
        console.log("GO")
    }
    else{
        console.log("input green red or yellow")
    }
}
traficlight("green")