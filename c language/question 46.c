// 46. Given a string, return the index of the first repeating character. If no character repeats, return -1.
// Input: "hello"
// Output: 2 (because 'l' repeats first)
// Input: "abcdef"
// Output: -1


// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>

// int main(){
// char input[]="abcdef";
// int len=strlen(input);
// int cnt=0;
// bool condition=false;
// for(int i=0;i<len;i++){
//     for(int j=i+1;j<len;j++){
//         if(input[i]==input[j]){
//             printf("%d",i);
//             condition=true;
//             break;
            
//         }
//     }
//     if(condition==true){
//         break;
//     }
// }
// if(condition==false){
//     printf("-1");
// }
// }