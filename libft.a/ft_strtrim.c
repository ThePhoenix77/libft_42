#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of 's1' with the characters
** specified in 'set' removed from the beginning and end of the string.
**
** Parameters:
** - s1: The string to be trimmed.
** - set: The set of characters to trim from 's1'.
**
** Returns:
** A new string representing the trimmed version of 's1'. The trimmed string
** is allocated with malloc(3), and it is the caller's responsibility to free
** this memory.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*trimmed;

	trimmed = (char *)s1;
	if (!s1 || !set)
		return (0);
	while (*s1 != '\0' && ft_strchr(set, *s1) != 0)
		s1++;
	len = ft_strlen(s1);
	if (len != 0)
		while (len >= 0 && ft_strchr(set, s1[len]) != 0)
			len--;
	trimmed = ft_substr((char *)s1, 0, len + 1);
	return (trimmed);
}
