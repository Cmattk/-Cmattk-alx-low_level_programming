#include "main.h"
void _puts_recursion(char *t)
{
	if (*t)
	{
		_putchar(*t);
		_puts_recursion(t + 1);
	}

	else
		_putchar('\n');
}
