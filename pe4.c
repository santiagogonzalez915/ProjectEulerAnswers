#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkPalindrome(int num1, int num2){
    int num = num1 * num2;
    int original = num1 * num2;
    int changed = 0;
    int remainder;

    while (num != 0){
        remainder = num % 10;
        changed = changed * 10 + remainder;
        num /= 10;
    }

    if (original == changed)
        return true;
    else
        return false;
}

int maxPalindrome(int highest){
int max = 0;

for (int i = 100; i <= 999; i++){
    for (int j = i; j <= 999; j++){
        if (checkPalindrome(i, j) == true && i * j >= max){
            max = i * j;
        }
    }
}

    return max;
}

int main() {
    int x = maxPalindrome(100000);
    printf("%d", x);
    return 0;
}