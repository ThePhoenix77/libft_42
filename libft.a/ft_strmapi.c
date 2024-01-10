#include "libft.h"

/*
** Applies the function 'f' to each character of the string 's' to create a new
** string resulting from successive applications of 'f'.
**
** Parameters:
** - s: The string to apply the function to.
** - f: The function to apply to each character.
**
** Returns:
** A new string resulting from the successive applications of 'f'.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*res;

	i = 0;
	if ((s == NULL) || (f == NULL))
		return (NULL);
	len = ft_strlen(s);
	res = (char *)malloc((sizeof(char)) * (len + 1));
	if (res == NULL)
		return (NULL);
	else
	{
		while (i < len)
		{
			res[i] = f(i, s[i]);
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}
