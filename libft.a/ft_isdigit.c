#include "libft.h"

/*
** ft_isdigit - Checks if the given character is a digit (0-9).
** @param c: The character to be checked.
** @return: 1 if the character is a digit, 0 otherwise.
*/
int	ft_isdigit(int c)
{
	/* Check if the character is within the digit range ('0' to '9') */
	return (c >= '0' && c <= '9');
}
