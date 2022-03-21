#include "_putchar.c"

void print_alphabet(void);

/**
 * print_alphabet - prints alphabet on stdout
 *
 * Return: void.
 */

void print_alphabet(void){
    for (int i = 97; i < 123; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
}
