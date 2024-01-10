#include "libft.h"

/*
** Locates the first occurrence of the null-terminated string 'needle' in the
** null-terminated string 'haystack', where not more than 'len' characters are
** searched.
**
** Parameters:
** - haystack: The string to be searched.
** - needle: The target substring to search for.
** - len: The maximum number of characters to search.
**
** Returns:
** If 'needle' is an empty string, 'haystack' is returned. If 'needle' occurs
** nowhere in 'haystack' up to 'len' characters, NULL is returned. Otherwise,
** a pointer to the first character of the first occurrence of 'needle' is
** returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp1;
	char	*tmp2;
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (len > 0 && *haystack)
	{
		i = 0;
		tmp1 = (char *)haystack;
		tmp2 = (char *)needle;
		while (*tmp2 && *tmp1 == *tmp2 && i < len)
		{
			tmp1++;
			tmp2++;
			i++;
		}
		if (*tmp2 == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
