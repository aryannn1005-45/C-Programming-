#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a = 56, b = 98;
    int g = gcd(a, b);
    int lcm = (a * b) / g;
    printf("GCD of %d and %d is %d\n", a, b, g);
    printf("LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}