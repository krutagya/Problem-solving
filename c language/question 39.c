// 39. Given a string, check if all brackets are closed properly. Example:Input: "{[()]}" Output: true
#include <stdio.h>
int main(){
int input[]="{[()]}";
int len=str(len);
int cnt1=0;
int cnt2=0;
int cnt3=0;
for(int i=0;i<len;i++){
    for(int j=len/2;j<len;j++){
    if(input[i]=="("){
        cnt1++;
    }
    else if(input[i]=="["){
        cnt2++;
    }
    else if(input[i]=="{"){
        cnt3++;
    }
    if(input[j]==")"){
        cnt1--;
    }
    else if(input[j]=="]"){
        cnt2--;
    }
    else if(input[j]=="}"){
        cnt3--;
    }
}
}
if(cnt1==0 && cnt2==0 && cnt3==0){
    printf("true");
}
else{
    printf("false");
}
}