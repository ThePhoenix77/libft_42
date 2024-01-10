#include "libft.h"

/*
** Concatenates two strings 's1' and 's2' and returns a new string.
**
** Parameters:
** - s1: The first string.
** - s2: The second string.
**
** Returns:
** A new string resulting from the concatenation of 's1' and 's2'.
** NULL is returned if memory allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*joined_str;

	i = 0;
	j = 0;
	// Check for NULL parameters
	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	// Allocate memory for the new string
	joined_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (joined_str == NULL)
		return (NULL);
	// Copy characters from the first string 's1'
	while (i < ft_strlen(s1))
	{
		joined_str[i] = s1[i];
		i++;
	}
	// Copy characters from the second string 's2'
	while (j < ft_strlen(s2))
	{
		joined_str[i] = s2[j];
		i++;
		j++;
	}
	// Add null terminator to the end of the joined string
	joined_str[i] = '\0';
	return (joined_str);
}
