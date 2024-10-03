// 48.Given a string, return a new string with all vowels removed.
// Input: "hello"
// Output: "hll"
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char input[]="hello";
//     int len=strlen(input);
//     char temp[len+1];
//     int j=0;
//     for(int i=0;i<len;i++){
//     if(input[i]!='a' && input[i]!='e' && input[i]!='i' && input[i]!='o' && input[i]!='u' && 
//     input[i]!='A' && input[i]!='E' && input[i]!='I' && input[i]!='O' && input[i]!='U'){
//         temp[j] = input[i];
//         j++;
//     }
//     }
//     printf("%s",temp);
// }