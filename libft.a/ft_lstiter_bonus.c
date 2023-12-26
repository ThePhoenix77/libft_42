#include "libft.h"

/*
** ft_lstiter - Iterates over a list and applies a function to each element.
** @param lst: The beginning of the list.
** @param f: The function to apply to each element.
** @return: None.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	// Check for NULL pointers
	if (lst == NULL || f == NULL)
		return ;

	// Iterate over the list
	while (lst != NULL)
	{
		// Apply the provided function to the content of the current element
		(*f)(lst->content);

		// Move to the next element in the list
		lst = lst->next;
	}
}
