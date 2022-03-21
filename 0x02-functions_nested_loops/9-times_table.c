#include "_putchar.c"

void times_table(void);
/**
 * times_table - prints 9 times table
 *
 * Return: void.
 */
void times_table(void)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int mult = i*j;
            int dig1= mult/10;
            int dig2 = mult % 10;

            if(j != 0)
            {
               _putchar(',');
               _putchar(' ');
            }

            if (dig1 == 0)
                _putchar(' ');
            else
                _putchar(dig1+'0');
            
            _putchar(dig2+'0');
            
            
        }
        _putchar('\n');
 
    }
    
}
