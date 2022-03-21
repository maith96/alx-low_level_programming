#include <unistd.h>

/**
 * _islower - checks for lowercase character
 * @c: The character to check if islower
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(char c)
{
    for (int i = 97; i < 123; i++)
    {
        if(c == i)
            return (1);
    }
    
	return (0);
}
