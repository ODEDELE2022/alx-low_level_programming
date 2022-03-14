#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
	char emmy;

	for (emmy = 'a'; emmy <= 'z'; emmy++)
	{
		if (emmy == 'q')
			continue;

		else if (emmy == 'e')
			continue;

		putchar(emmy);
	}

	putchar('\n');

	return (0);
}
