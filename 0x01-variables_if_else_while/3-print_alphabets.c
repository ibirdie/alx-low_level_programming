#include <stdio.h>
/**
 *main-function begins
 *
 *Return: function ends
 */
	int main(void)
{
	char alph[54] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i = 0;

	while (i < 53)
	{
		putchar(alph[i]);
		i++;
	}
	return (0);
}
