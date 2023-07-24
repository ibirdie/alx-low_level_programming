nclude "main.h"
/**
 * swap_int - Swapping two integer values
 * @a: first integer
 * @b: second integer
 *
 */

void swap_int(int *a, int *b)
{
	int C = *a;
	int *a = *b;
	*b = C;
}
