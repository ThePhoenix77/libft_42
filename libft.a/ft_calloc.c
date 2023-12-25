#include "libft.h"

/*
** ft_calloc - Allocates memory for an array of 'count' elements, each of 'size' bytes.
** The memory is initialized to zero.
** @param count: Number of elements.
** @param size: Size of each element in bytes.
** @return: A pointer to the allocated memory, or NULL if allocation fails.
*/
void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*memory;

	/* Check for invalid count or size values */
	if ((int)count < 0 || (int)size < 0)
		return (NULL);

	/* Calculate the total size required for the memory block */
	total = count * size;

	/* Allocate memory using malloc */
	memory = malloc(total);

	/* Check if memory allocation is successful */
	if (memory == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero using ft_bzero */
	ft_bzero(memory, total);

	/* Return a pointer to the allocated and zero-initialized memory */
	return (memory);
}
