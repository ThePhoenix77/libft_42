#include "libft.h"

/*
** count - Helper function to count the number of digits in a number.
** @param n: The number for which digits need to be counted.
** @return: The count of digits in the number.
*/
static int	count(int n)
{
	int		c;
	long	num;

	num = n;
	c = 0;
	if (num <= 0)
	{
		c = 1;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		c++;
	}
	return (c);
}

/*
** ft_itoa - Converts an integer to a string.
** @param n: The integer to be converted.
** @return: The string representation of the integer.
** Note: Memory is allocated for the result, and the caller is responsible for freeing it.
*/
char	*ft_itoa(int n)
{
	int		c;
	long	num;
	char	*res;

	c = count(n);
	num = n;
	res = (char *)malloc(sizeof(char) * (c + 1));
	if (res == NULL)
		return (NULL);
	res[c--] = '\0';
	if (num < 0)
	{
		num *= -1;
		res[0] = '-';
	}
	if (num == 0)
		res[0] = '0';
	while (num > 0)
	{
		res[c--] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
