#include "main.h"
/**
 * rev_string - reverses a string
 * @s: test string
*/

void rev_string(char *s)
{
	char Temp = 0;
	int i = 0;
	int length = 0;

	while (s[length++] != '\0')
		;
	length--;
	length--;
	while (i < length)
	{
		Temp = s[i];
		s[i] = s[length];
		s[length] = Temp;
		i++;
		length--;
	}
}
