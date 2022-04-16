#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;
	
	if(!(node = malloc(sizeof(t_list)))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
