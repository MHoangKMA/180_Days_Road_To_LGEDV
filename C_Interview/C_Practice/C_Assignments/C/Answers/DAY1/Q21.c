
#include <stdio.h>

int isNumber(char character)
{
    return (character >= '0' && character <= '9');
}

int main()
{

    char c;
    scanf("%c", &c);
    
    if (isNumber(c))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}