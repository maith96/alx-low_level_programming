#include "_putchar.c"

/**
 * putchar - writes '_putchar' on stdout
 *
 * Return: 1 on success.
 */

int main(void)
{
    char str[]="_putchar";
    char c;

    for (int i = 0; i < 8; i++)
    {
        _putchar(str[i]);
        _putchar('\n');

    }

    return (0);
}
