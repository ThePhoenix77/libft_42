#include "libft.h"

/*
** ft_check - Helper function to parse and convert digits to integer.
** @param i: The index in the string.
** @param nb: The accumulated value of the number.
** @param sign: The sign of the number (1 or -1).
** @param str: The input string.
** @return: The parsed integer.
*/
static int	ft_check(int i, long nb, int sign, const char *str)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		if (nb < 0 && sign == -1)
			return (0);
		else if (nb < 0 && sign == 1)
			return (-1);
		i++;
	}
	return ((int)(nb * sign));
}

/*
** ft_atoi - Converts a string to an integer.
** @param str: The input string.
** @return: The converted integer.
*/
int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	return (ft_check(i, nb, sign, str));
}
