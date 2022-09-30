
#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for any uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'y' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
