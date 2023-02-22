#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints _putchar, followed by a new line
* Return: 0
*/

int main(void)
{
	char _putchar[] = "_putchar";
	int msg;

	for (msg = 0; msg <= 7; msg++)
	{
		putchar(_putchar[msg]);
	}
	putchar('\n');
	return (0);
}
