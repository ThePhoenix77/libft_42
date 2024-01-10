#include "libft.h"

/*
** Copies up to 'dstsize - 1' characters from the string 'src' to 'dst'.
** Ensures that 'dst' is null-terminated.
**
** Parameters:
** - dst: The destination buffer.
** - src: The source string to be copied.
** - dstsize: The size of the destination buffer.
**
** Returns:
** The total length of the source string.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	const char	*srcp;

	// Calculate the length of the source string
	srcsize = ft_strlen(src);
	srcp = src;
	// Check if the destination size is zero
	if (dstsize == 0)
		return (srcsize);
	// Copy characters from source to destination, ensuring null-termination
	if (dstsize > 0)
	{
		while (--dstsize > 0 && *src)
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	// Return the total length of the source string
	return (srcsize);
}
