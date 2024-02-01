#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibNumbersSum (int max){
    int firstNum = 1; 
    int secondNum = 2;
    int total;
    int sum = 2;
    while (total < max){
        total = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = total;
        if (total % 2 == 0)
            sum += total;
    }
    return sum;
}

int main() {
    int x = fibNumbersSum(4000000);
    printf("%d", x);
    return 0;
}