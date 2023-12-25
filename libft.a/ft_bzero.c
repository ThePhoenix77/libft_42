#include "libft.h"

/*
** ft_bzero - Sets the first 'n' bytes of the memory area pointed to by 's' to zero.
** @param s: The pointer to the memory area.
** @param n: The number of bytes to set to zero.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

