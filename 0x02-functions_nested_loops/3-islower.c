#include "main.h"
/**
  * _islower - Lower case letters
  *@c: Charact to be checked
  *
  *Return: _islower;
  */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
