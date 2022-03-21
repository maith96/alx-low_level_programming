#include "_putchar.c"

void jack_bauer(void);
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * @int: integer
 *
 * Return: void.
 */
void jack_bauer(void)
{
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            _putchar((i/10) + '0');
            _putchar((i%10) + '0');
            _putchar(':');
             _putchar((j/10) + '0');
            _putchar((j%10) + '0');
            _putchar('\n');

        }
        
    }
}
