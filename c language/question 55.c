// Output: true (since 33=273^3 = 2733=27)
// Input: n = 0
// Output: false (since no power of 3 can be 0)

// 55.You are given an integer n. Your task is to write a program that determines whether n is a power of three. If n is a power of three, return true; otherwise, return false.A number is a power of three if:n=3kn = 3^kn=3k
// where k is a non-negative integer.
// Example:
// Input: n = 27
// Output: true (since 33=273^3 = 2733=27)
// Input: n = 0
// Output: false (since no power of 3 can be 0)

#include <stdio.h>
#include <stdbool.h>

bool is_power_of_three(int n) {
    if (n <= 0) {
        return false;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {
    int n1 = 27;
    int n2 = 0;
    int n3 = 9;
    int n4 = 10;
}