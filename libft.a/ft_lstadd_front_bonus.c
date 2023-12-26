#include "libft.h"

/*
** ft_lstadd_front - Adds a new element to the beginning of the list.
** @param lst: The address of a pointer to the first link of a list.
** @param new: The address of a pointer to the element to be added to the list.
** @return: None.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	// Check for NULL pointers
	if (lst == NULL || new == NULL)
		return ;

	// Set the next pointer of the new element to the current first element
	new->next = *lst;

	// Set the beginning of the list to the new element
	*lst = new;
}
