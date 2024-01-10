#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a substring from the string 's'.
** The substring begins at index 'start' and is of maximum size 'len'.
**
** Parameters:
** - s: The string from which to create the substring.
** - start: The starting index of the substring in 's'.
** - len: The maximum length of the substring.
**
** Returns:
** A new string representing the substring. The substring is allocated with
** malloc(3), and it is the caller's responsibility to free this memory.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;
	char	*empty_str;

	i = 0;
	if (s == NULL || start >= (unsigned int)ft_strlen(s) || len == 0)
	{
		empty_str = (char *)malloc(1);
		if (empty_str == NULL)
			return (NULL);
		empty_str[0] = '\0';
		return (empty_str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[len] = '\0';
	return (substring);
}
