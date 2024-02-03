#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int smallestMultiple(int range){
    int smallest = 2521;
    while (true){
        if (smallest % 20 == 0 && smallest % 18 == 0 && smallest % 11 == 0 && smallest % 12 == 0 && smallest % 13 == 0 && smallest % 14 == 0 && smallest % 16 == 0 && smallest % 15 == 0 && smallest % 17 == 0 && smallest % 19 == 0){
            return smallest;
        }
        smallest++;
    }
    return 0;
}

int main() {
    int x = smallestMultiple(20);
    printf("%d", x);
    return 0;
}