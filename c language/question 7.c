// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"
#include <stdio.h>
#include <string.h>
int main(){
    char light[6];
    printf("enter color of light");
    scanf("%s",&light);
    if(light=="red"){
        printf{"STOP"};
    }
    else if(light=="yellow"){
        printf("Slow down");
    }
    else if(light=="green"){
        printf("Go");
    }
    else{
        printf("input red,green or yellow color");
    }
}
