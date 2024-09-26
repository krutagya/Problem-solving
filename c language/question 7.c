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
    int verify1=strcmp(light,"red");
    if(verify1==0){
        printf("Stop");
    }
    int verify2 =strcmp(light,"yellow");
    if(verify2==0){
        printf("Slow down");
    }
    int verify3 =strcmp(light,"green");
    if(verify3==0){
        printf("go");
    }
    else{
        printf("inncorrect innput")
    }
    return 0;
}
