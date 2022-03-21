#include <unistd.h>

/**
 * _isalpha - checks for uppercase character
 * @c: The character to check if isalpha
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(char c)
{
    for (int i = 65; i < 91; i++)
    {
        if(c == i)
            return (1);
    }
    
	return (0);
}
