#include "libft.h"

/*
** ft_putendl_fd - Outputs the string `s` followed by a newline to the given
**                 file descriptor `fd`.
** @param s: The string to output.
** @param fd: The file descriptor on which to write.
*/
void	ft_putendl_fd(char *s, int fd)
{
	// Check if the file descriptor is valid and the string is not NULL
	if ((fd < 0) || (!s))
		return;

	// Output the string using ft_putstr_fd
	ft_putstr_fd(s, fd);

	// Write a newline character to the file descriptor
	write(fd, "\n", 1);
}
