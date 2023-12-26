#include "libft.h"

/*
** ft_memmove - Copies `len` bytes from memory area `src` to memory area `dst`.
** @param dst: Pointer to the destination memory area.
** @param src: Pointer to the source memory area.
** @param len: Number of bytes to be copied.
** @return: A pointer to the destination memory area `dst`.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;

	// Check if the pointers are valid
	if ((dst == NULL) && (src == NULL))
		return (NULL);

	// If source and destination overlap and source is before destination
	if (d > s && d < s + len)
	{
		s += len;
		d += len;
		while (len-- > 0)
			*--d = *--s;
	}
	else
	{
		// Copy `len` bytes from `src` to `dst`
		while (len-- > 0)
			*d++ = *s++;
	}

	// Return a pointer to the destination memory area `dst`
	return (dst);
}
