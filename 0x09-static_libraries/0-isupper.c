#include "main.h"
/**
 * _isupper - Function to check for uppercase character.
 * @c:  character input
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
