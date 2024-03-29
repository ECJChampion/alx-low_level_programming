#include "main.h"
/**
 * _strstr - this a function that locates a string
 * @haystack: string to be searched
 * @needle: string that should be located
 *
 * Return: return a pointer to the beginning of the substring else return null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
