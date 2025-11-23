#include <stdio.h>
#include <stdlib.h>  

int main() {
    /*
       a, b: coordinates of Varda's house (may be negative)
       s: the exact number of steps Drazil said he used
       Use long long because a, b can be up to 1e9 and s up to 2e9
    */
    long long a, b, s;
    scanf("%lld %lld %lld", &a, &b, &s);

    /*
       Minimum Manhattan distance from (0, 0) to (a, b)
       = |a| + |b|
       This is the least possible number of steps needed.
    */
    long long dist = llabs(a) + llabs(b);

    /*
       Condition 1: s must be >= dist
                    (cannot reach using fewer steps)

       Condition 2: (s - dist) must be even
                    (extra steps must come in canceling pairs,
                     such as left-right or up-down,
                     each pair consumes 2 steps)
    */
    if (s < dist) {
        printf("No\n");
    } else {
        long long diff = s - dist;
        if (diff % 2 == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
