#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int multiples (int num1, int num2, int max){
    int ans = 0;
    for (int i = 0; i < max; i ++){
        if (i % num1 == 0 || i % num2 == 0)
            ans += i;
    }
    return ans;
}

int main() {
    int x = multiples(3, 5, 1000);
    printf("%d", x);
    return 0;
}