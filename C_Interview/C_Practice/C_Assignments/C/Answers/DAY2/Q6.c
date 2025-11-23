#include <stdio.h>

int main() {
    /*
       n : liters of water needed
       a : price of 1-liter bottle
       b : price of 2-liter bottle
       n can be up to 1e12 → use long long
    */
    long long n;
    long long a, b;
    scanf("%lld %lld %lld", &n, &a, &b);

    long long cost;

    /*
       If two 1-liter bottles are cheaper or equal to one 2-liter bottle,
       then it's always optimal to use only 1-liter bottles.
    */
    if (2 * a <= b) {
        cost = n * a;
    } 
    else {
        /* Otherwise, 2-liter bottles give better price per liter */
        long long two = n / 2;   // number of 2-liter bottles
        long long rem = n % 2;   // remaining liters (0 or 1)

        cost = two * b + rem * a;
    }

    printf("%lld\n", cost);
    return 0;
}
