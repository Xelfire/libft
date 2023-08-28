/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:12:14 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/12 15:22:04 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*li;
	t_list	*li_deux;

	if (!lst || !f)
	{
		return (NULL);
	}
	li = (void *)0;
	while (lst)
	{
		li_deux = ft_lstnew(f(lst->content));
		if (!li_deux)
		{
			ft_lstclear(&li, del);
			return (NULL);
		}
		ft_lstadd_back(&li, li_deux);
		lst = lst->next;
	}
	return (li);
}
