#include <stdio.h>

int main() {
    long long a, b, k;
    if (scanf("%lld %lld %lld", &a, &b, &k) != 3) return 0;

    long long pairs = k / 2;           
    long long ans = pairs * (a - b);   
    if (k % 2 == 1) ans += a;          

    printf("%lld\n", ans);
    return 0;
}
