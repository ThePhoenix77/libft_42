#include "libft.h"

/*
** ft_isalnum - Checks if the given character is an alphanumeric character.
** @param c: The character to be checked.
** @return: 1 if the character is alphanumeric, 0 otherwise.
*/
int	ft_isalnum(int c)
{
	/* Check if the character is a digit or an alphabetic character using ft_isdigit and ft_isalpha */
	if ((ft_isdigit(c) == 1) || (ft_isalpha(c) == 1))
		return (1);

	/* If not a digit or an alphabetic character, return 0 */
	return (0);
}
