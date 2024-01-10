#include "libft.h"

/*
** Converts a lowercase letter to its corresponding uppercase letter.
**
** Parameters:
** - c: The character to be converted.
**
** Returns:
** The uppercase equivalent of the input character if it is a lowercase letter.
** If the input character is not a lowercase letter, the original character is returned.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
