#include "main.h"
/**
 * main - Entry point
 * Description :prints using putshar prototype
 * 
 * Return always 0
 */

int main(void)
{
	char str[] = "putshar";
	int ch;
	for (ch=0;ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return  (0);
}
