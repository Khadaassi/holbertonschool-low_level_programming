#include <stdio.h>

int main(void)
{
	int i;
	for (int i = 0; i < 16; i++)
	{
		char hexDigit;
		if (i < 10)
		{
		hexDigit = i +'0';
		}
		else
		{
		hexDigit = i - 10 + 'a';
		}
		putchar(hexDigit);
	}
	putchar('\n');
	return (0);
}
