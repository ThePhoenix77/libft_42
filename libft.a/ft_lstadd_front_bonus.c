#include "libft.h"

/*
** ft_lstadd_back - Adds a new element to the end of the list.
** @param lst: The address of a pointer to the first link of a list.
** @param new: The address of a pointer to the element to be added to the list.
** @return: None.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	// Check for NULL pointers
	if (lst == NULL || new == NULL)
		return ;
	
	// If the list is empty, set the new element as the first element
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}

	// Traverse the list to find the last element
	last = *lst;
	while (last->next != NULL)
		last = last->next;

	// Add the new element to the end of the list
	last->next = new;
}
