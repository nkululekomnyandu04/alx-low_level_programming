#include "main.h"

/**
  * _islower - Entry point
  *
  * Return: Returns 1 for lowercase and returns 0 otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
