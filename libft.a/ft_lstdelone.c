#include "libft.h"

/*
** ft_lstdelone - Deletes a single element of a list and frees its memory.
** @param lst: The element to be deleted.
** @param del: The function used to delete the content of the element.
** @return: None.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	// Check for NULL pointers or a NULL function pointer
	if (lst == NULL || del == NULL)
		return ;

	// If the content of the element is not NULL, delete its content using the provided function
	if (lst->content != NULL)
		(*del)(lst->content);

	// Free the memory occupied by the element
	free(lst);
}
