#include "libft.h"

/*
** Appends the string 'src' to the end of 'dst' with a specified size limit.
**
** Parameters:
** - dst: The destination string.
** - src: The source string to be appended.
** - dstsize: The total size of the destination buffer.
**
** Returns:
** The total length of the concatenated string (initial length of 'dst' + length of 'src').
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	// Check for NULL destination or zero size limit
	if ((dst == NULL) && dstsize == 0)
		return (0);
	// Calculate the length of the existing destination string
	dstlen = ft_strlen(dst);
	// Calculate the length of the source string
	srclen = ft_strlen(src);
	i = dstlen;
	j = 0;
	// Check if the destination buffer size is less than or equal to the current length
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	// Copy characters from the source string to the destination buffer
	while (i < dstsize - 1 && src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	// Add null terminator to the end of the destination buffer
	dst[i] = '\0';
	// Return the total length of the concatenated string
	return (dstlen + srclen);
}
