#include "libft.h"

/*
** ft_lstmap - Applies the function 'f' to each element of the list,
** creating a new list resulting from the successive applications of 'f'.
** @param lst: The beginning of the list to map.
** @param f: The function to apply to each element.
** @param del: The function used to delete the content of an element if needed.
** @return: The new list. NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	// Check if the input list or the functions are NULL
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);

	// Initialize the result list to NULL
	res = NULL;

	// Iterate over the input list
	while (lst != NULL)
	{
		// Create a new node for the result list
		tmp = ft_lstnew(NULL);

		// Check if the allocation fails
		if (tmp == NULL)
		{
			// Clean up the result list and return NULL
			ft_lstclear(&res, del);
			return (NULL);
		}

		// Apply the function 'f' to the content and assign it to the new node
		tmp->content = f(lst->content);

		// Add the new node to the end of the result list
		ft_lstadd_back(&res, tmp);

		// Move to the next element in the input list
		lst = lst->next;
	}

	// Return the resulting list
	return (res);
}
