#include "libft.h"

/*
** ft_strchr - Locate the first occurrence of a character in a string.
** @param str: The string to search.
** @param c: The character to locate.
** @return: A pointer to the first occurrence of `c` in `str`, or NULL if `c` is not found.
*/
char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}

	// Check for the null terminator if `c` is 0
	if (*str == (char)c)
		return ((char *)str);

	// If `c` is not found, return NULL
	return (NULL);
}
