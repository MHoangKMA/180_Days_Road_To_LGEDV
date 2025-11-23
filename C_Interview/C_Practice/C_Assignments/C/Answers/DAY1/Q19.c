#include <stdio.h>

int isUpper(char character)
{
    return (character >= 'A' && character <= 'Z');
}

int isUpper2(char character)
{
    int isUpper = 0;
    if (character >= 'A' && character <= 'Z')
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
    if (isUpper(c))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}