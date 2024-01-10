#include "libft.h"

/*
** Applies the function 'f' to each character of the string 's'
** along with its index. The function 'f' takes two parameters:
** the index of the character and a pointer to the character itself.
**
** Parameters:
** - s: The string to iterate over.
** - f: The function to apply to each character.
**
** Returns:
** None.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			len;
	unsigned int	i;

	i = 0;
	// Check for NULL parameters
	if ((s == NULL) || (f == NULL))
		return;
	// Calculate the length of the string
	len = ft_strlen(s);
	// Check for NULL parameters (again, after accessing 's')
	if ((!s) || (!f))
		return;
	// Iterate over each character and apply the function 'f'
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
