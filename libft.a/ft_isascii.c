#include "libft.h"

/*
** ft_isascii - Checks if the given character is an ASCII character.
** @param c: The character to be checked.
** @return: 1 if the character is ASCII, 0 otherwise.
*/
int	ft_isascii(int c)
{
	/* Check if the character is within the ASCII range (0-127) */
	return (c >= 0 && c <= 127);
}
