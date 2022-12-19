#include <string.h>

/*
 * calculate the length of a stirng
 * @s string
 *
 *
 */

int _strlen(char *s)
{
	int len = 0;
	while (*(s + len) !='\0')
	{
		len = len +1;
	}
	return len;
}
