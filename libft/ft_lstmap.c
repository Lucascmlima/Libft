/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 20:35:34 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/20 21:00:53 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst || !f || !del)
		return (NULL);
	t_list	*newl;
	t_list	*temp;

	temp = NULL;
	newl = NULL;
	while(lst)
	{	
		temp = ft_lstnew(lst->content);
		if (!temp)
		{
			ft_lstclear(&newl, del);
			return (NULL);
		}
		temp->content = f(lst->content);
		ft_lstadd_back(&newl, temp);
		lst = lst->next;
	}
	ft_lstclear(temp, del);
	return (newl);
}