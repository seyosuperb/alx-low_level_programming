#include "main.h"

/**
 * _isalpha - Checks for alphabet character
 *@c: The character to be checked
 * Return: 1 for alphabetic character 0r 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
