#include <stdio.h>

/**
 *main - Entry point
 *
 *Numbers must be separated by ,, followed by a space
 *Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
