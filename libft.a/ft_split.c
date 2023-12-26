#include "libft.h"

/*
** count_words - Count the number of words in a string `s` delimited by the character `c`.
** @param s: The string to count words in.
** @param c: The delimiter character.
** @return: The number of words in the string.
*/
static int	count_words(char const *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s == c)
			word = 0;
		else if (!word)
		{
			word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

/*
** cpw - Copy a word from string `s` into a new dynamically allocated string.
** @param s: The source string.
** @param c: The delimiter character.
** @return: The newly allocated string containing the word.
*/
static char	*cpw(char const *s, char c)
{
	int		wlen;
	char	*word;
	int		i;

	wlen = 0;
	i = 0;
	while (s[wlen] && s[wlen] != c)
		wlen++;
	word = (char *)malloc(wlen + 1);
	if (word == NULL)
		return (NULL);
	while (i < wlen)
	{
		word[i] = s[i];
		i++;
	}
	word[wlen] = '\0';
	return (word);
}

/*
** ft_free - Free the memory allocated for the result array.
** @param res: The result array to be freed.
** @param n: The number of elements in the result array.
** @return: NULL.
*/
static char	**ft_free(char **res, int n)
{
	while (n > 0)
		free(res[--n]);
	free(res);
	return (NULL);
}

/*
** ft_split - Split a string `s` into an array of words using the delimiter `c`.
** @param s: The string to split.
** @param c: The delimiter character.
** @return: An array of strings (words) or NULL if memory allocation fails.
*/
char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		w_count;

	// Check if the input string is NULL
	if (!s)
		return (NULL);

	// Count the number of words in the string
	w_count = count_words(s, c);

	// Allocate memory for the result array
	res = (char **)malloc(sizeof(char *) * (w_count + 1));
	if (!res)
		return (NULL);

	// Initialize the last element of the array to NULL
	res[w_count] = NULL;

	i = 0;
	while (i < w_count)
	{
		// Skip delimiter characters
		while (*s && *s == c)
			s++;

		// Copy the word into the result array
		res[i] = cpw(s, c);

		// Check if memory allocation for the word failed
		if (!res[i])
			return (ft_free(res, i));

		// Move to the next word
		while (*s && *s != c)
			s++;

		i++;
	}

	return (res);
}
