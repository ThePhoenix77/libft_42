#include "libft.h"

/*
** ft_putnbr_fd - Outputs the integer `n` to the given file descriptor `fd`.
** @param n: The integer to output.
** @param fd: The file descriptor on which to write.
*/
void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	// Convert the integer to a long for handling INT_MIN
	nbr = n;

	// Check if the file descriptor is valid
	if (fd < 0)
		return;

	// Handle negative numbers
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}

	// Recursively handle each digit
	if (nbr < 10)
	{
		c = nbr + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = nbr % 10 + '0';
		ft_putnbr_fd(nbr / 10, fd);
		write(fd, &c, 1);
	}
}
