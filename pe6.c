#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

long squareDifference(int max){

    long sumSquares = 0; 
    long squareSums = 0;

    for (int i = 1; i <= max; i++){
        sumSquares += i * i;
    }

    printf("%d\n", sumSquares);

    for (int i = 1; i <= max; i++){
        squareSums += i;
    }

    squareSums = squareSums * squareSums;

    return squareSums - sumSquares;
}

int main() {
    long x = squareDifference(100);
    printf("%ld", x);
    return 0;
}