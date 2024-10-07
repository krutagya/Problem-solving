// 44. Given a string, return all possible substrings of that string. This includes all substrings of every length, from length 1 to the length of the string itself.
// Example:
// Input: "abc"
// Output: ["a", "ab", "abc", "b", "bc","c"]
#include <stdio.h>
int main(){
    char input="abc";
    int len=strlen(input);
    char temp;
    int x=0;
    int i,j;
    int arr[]={};
    for(i=0;i<len;i++){
        temp="";
        for( j=i;j<len;j++){
            arr[x]=input[i];
            x++;
        }
    }
    printf("%d",arr);
}