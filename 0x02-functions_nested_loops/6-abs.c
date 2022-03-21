#include <unistd.h>

int _abs(int);
/**
 * _abs - omputes the absolute value of an integer
 * @int: integer
 *
 * Return: On success the value.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int num)
{
    
	return (num < 0)? -num: num;
}
