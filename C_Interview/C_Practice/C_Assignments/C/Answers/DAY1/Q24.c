
#include <stdio.h>

char toLower(char character)
{

    return (character >= 'A' && character <= 'Z') ? (character + ('a' - 'A')) : character;
}

char isAlphabet(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char nextCharacter(char character)
{
    char lower_C = toLower(character);
    if (lower_C == 'z')
    {
        return 'a';
    }

    return lower_C + 1;
}

int main()
{

    char c;
    scanf("%c", &c);
    if (!isAlphabet(c))
    {
        printf("INVALID\n");
        return 0;
    }

    char afterConverCharacter = nextCharacter(c);
    printf("%c\n", afterConverCharacter);

    return 0;
}