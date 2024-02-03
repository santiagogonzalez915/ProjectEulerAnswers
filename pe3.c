#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long largestPrimeFactor(long num){
    long max = -1;

    // Divide num by 2 to remove all even factors
    while (num % 2 == 0) {
        max = 2;
        num /= 2;
    }

    // Now num must be odd, start loop from 3
    for (long i = 3; i * i <= num; i += 2){
        // While i divides num, divide num by i and update max
        while (num % i == 0) {
            max = i;
            num = num / i;
        }
    }

    // If num is a prime number greater than 2
    if (num > 2) {
        max = num;
    }

    return max;
}

int main() {
    long x = largestPrimeFactor(600851475143);
    printf("%ld", x);
    return 0;
}