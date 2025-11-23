#include <stdio.h>

int main() {
    /* n : maximum coin denomination (coins available: 1,2,3,...,n)
       S : target sum
       Constraints: 1 ≤ n ≤ 100000, 1 ≤ S ≤ 1e9
       Use long long for safety when doing arithmetic */
    long long n, S;
    if (scanf("%lld %lld", &n, &S) != 2) return 0;

    /* minimum number of coins = ceil(S / n) */
    long long result = (S + n - 1) / n;

    printf("%lld\n", result);
    return 0;
}
