#include "libft.h"

/*
** ft_strdup - Duplicate a string.
** @param s1: The string to duplicate.
** @return: A pointer to a new string, or NULL if the memory allocation fails.
*/
char	*ft_strdup(const char *s1)
{
	int		size;
	char	*copy;
	char	*cp;

	// Calculate the length of the input string
	size = ft_strlen(s1);

	// Allocate memory for the new string, including space for the null terminator
	copy = (char *)malloc(size + 1);
	if (copy == NULL)
		return (NULL);

	// Create a pointer to the beginning of the allocated memory
	cp = copy;

	// Copy characters from the input string to the new string
	while (*s1)
	{
		*copy++ = *s1++;
	}

	// Add the null terminator to the end of the new string
	*copy = '\0';

	// Return a pointer to the new string
	return (cp);
}
