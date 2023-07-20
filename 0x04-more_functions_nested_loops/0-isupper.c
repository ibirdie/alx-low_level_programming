#include "main.h"

/**
  * _isupper - Checking for uppercase Characters.
  *@c: input character.
  *
  *Return: (1) or (0) if not uppercase.
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
