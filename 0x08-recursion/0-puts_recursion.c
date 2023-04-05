#include "main"

void _Recursion(char *x)
{
	if (*x)
	{
		_putchar(*x);
		_Recursion(x + 1);
	}

	else
		_putchar('\n');
}
