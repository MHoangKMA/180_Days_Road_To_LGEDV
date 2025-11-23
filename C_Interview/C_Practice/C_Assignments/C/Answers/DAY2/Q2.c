#include <stdio.h>

#define RANGEMIN 1
#define RANGEMAX 16

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    if ((M < RANGEMIN) || (M > RANGEMAX) ||
        (N < RANGEMIN) || (N > RANGEMAX) ||
        M > N)
    {
        return 1;
    }

    int maxDomino = (M * N) / 2;

    printf("%d\n", maxDomino);
    return 0;
}
