#include "libft.h"

/*
** ft_lstnew - Allocates and returns a new element of the list.
** The variable 'content' is initialized with the value of the parameter 'content'.
** @param content: The content to create the new element with.
** @return: The new element. NULL if the allocation fails.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	// Allocate memory for the new element
	new = (t_list *)malloc(sizeof(t_list));

	// Check if the allocation fails
	if (new == NULL)
		return (NULL);

	// Set the content and next pointer of the new element
	new->content = content;
	new->next = NULL;

	// Return the new element
	return (new);
}
