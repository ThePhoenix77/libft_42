#include "libft.h"

/*
** ft_memcmp - Compares two memory areas.
** @param s1: Pointer to the first memory area.
** @param s2: Pointer to the second memory area.
** @param n: Number of bytes to be compared.
** @return: An integer less than, equal to, or greater than 0 if the first `n` bytes
** of s1 is found, respectively, to be less than, to match, or be greater than
** the first `n` bytes of s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	// Iterate through the memory areas
	while (n-- > 0)
	{
		// Compare each byte of the memory areas
		if (*str1 != *str2)
		{
			// Return the difference if a mismatch is found
			return ((int)(*str1 - *str2));
		}
		str1++;
		str2++;
	}

	// Return 0 if the memory areas match up to the specified number of bytes
	return (0);
}
