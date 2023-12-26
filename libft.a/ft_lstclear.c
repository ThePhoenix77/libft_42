#include "libft.h"

/*
** ft_lstclear - Deletes and frees the memory of each element of a list.
** @param lst: The address of a pointer to the first link of a list.
** @param del: The address of the function used to delete the content of an element.
** @return: None.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	// Check for NULL pointers or NULL function pointer
	if (lst == NULL || *lst == NULL || del == NULL)
		return ;

	// Start from the first element of the list
	current = *lst;

	// Traverse the list
	while (current != NULL)
	{
		// Save the next element before deleting the current one
		next = current->next;

		// Delete the current element using the provided function
		ft_lstdelone(current, del);

		// Move to the next element
		current = next;
	}

	// Set the list pointer to NULL after deleting all elements
	*lst = NULL;
}
