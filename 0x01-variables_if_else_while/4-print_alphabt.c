#include <stdio.h>
/**
 *main-function begins
 *
 *Return: function ends
 */
	int main(void)
{
	char alph[25] = "abcdfghijklmnoprstuvwxyz\n";
	int i = 0;

	while (i < 25)
	{
		putchar(alph[i]);
		i++;
	}
	return (0);
}
