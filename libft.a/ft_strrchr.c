#include "libft.h"

/*
** Locates the last occurrence of the character 'c' (converted to a char) in
** the null-terminated string 's'. The null-terminating character is considered
** part of the string.
**
** Parameters:
** - s: The string to be searched.
** - c: The character to search for.
**
** Returns:
** If the character 'c' is found in the string 's', a pointer to the last
** occurrence of 'c' in 's' is returned. If 'c' does not occur in the string,
** NULL is returned.
*/
char	*ft_strrchr(const char *s, int c)
{
	const char	*res;

	res = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			res = s;
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)res);
}
