#include "libft.h"

/*
** ft_memset - Fills the first `len` bytes of the memory area pointed to by `b`
** with the constant byte `c`.
** @param b: Pointer to the memory area.
** @param c: Value to be set.
** @param len: Number of bytes to be set to the value.
** @return: A pointer to the memory area `b`.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}

	// Return a pointer to the memory area `b`
	return (b);
}
