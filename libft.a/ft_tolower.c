#include "libft.h"

/*
** Converts an uppercase letter to its corresponding lowercase letter.
**
** Parameters:
** - c: The character to be converted.
**
** Returns:
** The lowercase equivalent of the input character if it is an uppercase letter.
** If the input character is not an uppercase letter, the original character is returned.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
