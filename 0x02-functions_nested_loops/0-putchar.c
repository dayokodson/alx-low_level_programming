#include "main.h"

/**
 * to get ascii character value
 * https://www.ibm.com/docs/en/sdse/6.4.0?topic=configuration-ascii-characters-from-33-126
 * main - Prints _putchar as a message.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 80, 85, 84, 67, 72, 97, 82};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}

