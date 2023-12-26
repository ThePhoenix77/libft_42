#include "libft.h"

/*
** ft_isalpha - Checks if the given character is an alphabetic character.
** @param c: The character to be checked.
** @return: 1 if the character is alphabetic, 0 otherwise.
*/
int	ft_isalpha(int c)
{
	/* Check if the character is within the ASCII range for uppercase (65-90) or lowercase (97-122) alphabets */
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
