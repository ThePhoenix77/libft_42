#include "libft.h"

/*
** ft_lstsize - Counts the number of elements in a list.
** @param lst: The beginning of the list.
** @return: The number of elements in the list.
*/
int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*current;

	size = 0;
	current = lst;

	// Check if the list is empty
	if (!lst)
		return (0);

	// Traverse the list and count the elements
	while (current != NULL)
	{
		size++;
		current = current->next;
	}

	// Return the number of elements in the list
	return (size);
}
