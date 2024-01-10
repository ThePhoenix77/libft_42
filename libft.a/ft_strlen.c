#include "libft.h"

/*
** Computes the length of the string 's'.
**
** Parameters:
** - s: The string to compute the length of.
**
** Returns:
** The length of the string.
*/
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
