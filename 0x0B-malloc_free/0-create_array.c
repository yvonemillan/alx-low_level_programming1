#include "main.h"

/**
 * create_array -creates an array of type chars, and initializes
 *
 * @size: gives the size of the array
 *
 * @c: this array is of char type
 *
 * Return: a pointer to the array,else  NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *i;

	if (size == 0)
		return (NULL);
	i = malloc(size * sizeof(char));
	if (i == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		i[y] = c;
	}
	return (i);
}
