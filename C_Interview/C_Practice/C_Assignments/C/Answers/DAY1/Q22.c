
#include <stdio.h>

char toLower(char *character)
{

    return (character >= 'A' && character <= 'Z') ? (character + ('a' - 'A')) : character;

}

int main()
{

    char c;
    scanf("%c", &c);

    char afterConverCharacter = toLower(c);
    printf("%c\n", afterConverCharacter);

    return 0;
}