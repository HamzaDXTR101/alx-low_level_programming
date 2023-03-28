#include "main.h"
int _strlen(char *s)
{
	int l = 0;

	for ( ; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}
