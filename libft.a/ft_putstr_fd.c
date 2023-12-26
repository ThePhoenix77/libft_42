#include "libft.h"

/*
** ft_putstr_fd - Outputs the string `s` to the given file descriptor `fd`.
** @param s: The string to output.
** @param fd: The file descriptor on which to write.
*/
void	ft_putstr_fd(char *s, int fd)
{
	// Check if the file descriptor is valid or if the string is NULL
	if ((fd < 0) || (!s))
		return;

	// Loop through each character in the string
	while (*s != '\0')
	{
		// Write the character to the file descriptor
		write(fd, s, 1);
		s++;
	}
}
