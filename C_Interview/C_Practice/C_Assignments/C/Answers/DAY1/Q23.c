
#include <stdio.h>

char toUpper(char *character)
{

    return (character >= 'a' && character <= 'z') ? (character - ('a' - 'A')) : character;

}

int main()
{

    char c;
    scanf("%c", &c);

    char afterConverCharacter = toUpper(c);
    printf("%c\n", afterConverCharacter);

    return 0;
}