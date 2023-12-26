#include "libft.h"

/*
** ft_isprint - Checks if the given character is a printable ASCII character.
** @param c: The character to be checked.
** @return: 1 if the character is printable, 0 otherwise.
*/
int	ft_isprint(int c)
{
	/* Check if the character is within the printable ASCII range (32 to 126) */
	return ((c >= 32) && (c <= 126));
}
