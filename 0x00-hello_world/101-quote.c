#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point Print out a string in the standard error.
 *Return: 1 if success.
*/
int main(void)

{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, strlen(quote));
	return (1);
}
