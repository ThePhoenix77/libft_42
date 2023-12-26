#include "libft.h"

/*
** ft_memchr - Locates the first occurrence of a byte in a memory area.
** @param buf: The memory area to be searched.
** @param c: The byte to be located.
** @param n: Number of bytes to be analyzed.
** @return: A pointer to the first occurrence of the byte `c` or NULL if not found.
*/
void	*ft_memchr(const void *buf, int c, size_t n)
{
	const unsigned char	*p;

	p = (unsigned char *)buf;

	// Iterate through the memory area
	while (n-- > 0)
	{
		// Check if the current byte matches the target byte
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}

	// Return NULL if the byte is not found
	return (NULL);
}
