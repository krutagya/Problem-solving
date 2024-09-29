// 35. Print an inverted right-angled triangle pattern with n rows.
#include <stdio.h>

int main() {
    
int n = 5;
char temp[] = "";

for(int i=n; i >= 1; i--) {
    for(int j=0; j<i-1 ; j++) {
        printf(" ");
    }
    for(int k=i; k <= n; k++) {
        printf("*");
    }
    printf("%s\n", temp);
}
}
