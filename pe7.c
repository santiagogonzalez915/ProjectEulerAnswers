#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i * i <= n + 1; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int findNthPrime(int range){
    int numPrimes = 0;
    int prime = 1;

    while (numPrimes < range){
        prime += 1;
        if (isPrime(prime)){
            numPrimes += 1;
        }
    }
    return prime;
}


int main(){
    int x = findNthPrime(10001);
    printf("%d", x);
    return 0;
}