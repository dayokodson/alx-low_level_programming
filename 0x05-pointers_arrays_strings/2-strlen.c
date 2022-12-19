#include "main.h"

/*
 * _strlen - calculate the length of a stirng
 * @s: input string.
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len = len + 1;
	}

	return (len);
}
