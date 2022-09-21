#include "main.h"
/**
 * _isalpha - checks if a character is a letter
 * @c: test character
 * Return: 1 if letter, else 0
*/

int _isalpha(int c)
{
	int islowercase = (c >= 'a') && (c <= 'z');
	int isuppercase = (c >= 'A') && (c <= 'Z');

	return (islowercase || isuppercase);
}
