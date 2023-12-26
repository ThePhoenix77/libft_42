#include "libft.h"

/*
** ft_memcpy - Copies `n` bytes from memory area `src` to memory area `dst`.
** @param dst: Pointer to the destination memory area.
** @param src: Pointer to the source memory area.
** @param n: Number of bytes to be copied.
** @return: A pointer to the destination memory area `dst`.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstp;
	unsigned char	*srcp;

	dstp = (unsigned char *)dst;
	srcp = (unsigned char *)src;

	// Check if the pointers are valid
	if ((dst == NULL) && (src == NULL))
		return (NULL);

	// Copy `n` bytes from `src` to `dst`
	while (n > 0)
	{
		*dstp = *srcp;
		dstp++;
		srcp++;
		n--;
	}

	// Return a pointer to the destination memory area `dst`
	return (dst);
}
