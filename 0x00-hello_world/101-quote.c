#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, text, sizeof(text) - 1);
	return (1);
}
