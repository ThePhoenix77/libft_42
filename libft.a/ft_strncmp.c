#include "libft.h"

/*
** Compares two strings lexicographically up to 'n' characters.
**
** Parameters:
** - s1: The first string to compare.
** - s2: The second string to compare.
** - n: The maximum number of characters to compare.
**
** Returns:
** An integer greater than, equal to, or less than 0, according to whether
** 's1' is greater than, equal to, or less than 's2'.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	res;

	res = 0;
	while (*s1 && *s2 && (n > 0) && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	res = *(unsigned char *)s1 - *(unsigned char *)s2;
	if (res > 0)
		res = 1;
	else if (res < 0)
		res = -1;
	return (res);
}
