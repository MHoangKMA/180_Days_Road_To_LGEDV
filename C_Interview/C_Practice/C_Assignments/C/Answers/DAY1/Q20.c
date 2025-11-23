
#include <stdio.h>

int isCharacter(char character)
{
    return (character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z');
}

int main()
{

    char c;
    scanf("%c", &c);
    
    if (isCharacter(c))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}