/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:16:25 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/12 15:18:49 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*li;

	li = (t_list *) malloc(sizeof(t_list));
	if (!li)
	{
		return (NULL);
	}
	(*li).content = content;
	(*li).next = NULL;
	return (li);
}
