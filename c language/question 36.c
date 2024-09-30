// 36. Print a pyramid pattern with n rows.
#include <stdio.h>
#include <stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}