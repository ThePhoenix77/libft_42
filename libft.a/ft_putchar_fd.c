#include "libft.h"

/*
** ft_putchar_fd - Outputs the character `c` to the given file descriptor `fd`.
** @param c: The character to output.
** @param fd: The file descriptor on which to write.
*/
void	ft_putchar_fd(char c, int fd)
{
	// Check if the file descriptor is valid
	if (fd >= 0)
		write(fd, &c, 1);
	else
		return; // Do nothing if the file descriptor is not valid
}
