#include <stdio.h>

int isLower(char character)
{
    return (character >= 'a' && character <= 'z');
}

int isLower1(char character)
{
    int isUpper = 0;
    if (character >= 'a' && character <= 'z')
    {
        isUpper = 1;
    }
    else
    {
        isUpper = 0;
    }
    return isUpper;
}

int main()
{

    char c;
    scanf("%c", &c);
    if (isLower(c))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}