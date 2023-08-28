/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:04:08 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/12 15:06:50 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*li;

	if (lst)
	{
		while (*lst)
		{
			li = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = li;
		}
	}
}
