#include "main.h"

/**
  *_isdigit - Checking for digits.
  *@c: Input character'
  *
  *Return: 1 or 0 if not.
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
