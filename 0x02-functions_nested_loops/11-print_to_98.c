#include "_putchar.c"

void print_to_98(int);
/**
 * print_to_98 - prints to 98 times table
 *
 * Return: void.
 */
void print_to_98(int n)
{
    int i =n;
if(i > 98){
            i=-i;
        }
    while( i <=98){
        int m =i;
        
        m= ( m<0)?-m:m;

        int dig1= m/10;
        int dig2 = m % 10;

        if (i != n)
        {
        _putchar(',');
        _putchar(' ');

        }
        if(i < 0)
             _putchar('-');
        if (dig1 != 0)
        {
            _putchar(dig1+'0');
        }
        _putchar(dig2+'0');
++i;
    }
    _putchar('\n');

}

