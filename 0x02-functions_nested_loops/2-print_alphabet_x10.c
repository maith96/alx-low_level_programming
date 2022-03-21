#include "_putchar.c"

void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Return: void.
 */

void print_alphabet_x10(void){
    for (int j = 0; j < 10; j++)
    {
       for (int i = 97; i < 123; i++)
    {
        _putchar(i);
    }  _putchar('\n');
    }
    
   
}
