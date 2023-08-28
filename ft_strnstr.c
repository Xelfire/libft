/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:30:41 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/12 14:33:17 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*src;
	char	*find;
	size_t	size;

	src = (char *)s1;
	find = (char *)s2;
	size = ft_strlen(find);
	if (size == 0)
		return ((char *)(src));
	if (size > n)
		return ((char *)(NULL));
	while (n-- >= size && *src)
	{
		if (ft_strncmp(src, find, size) == 0)
			return ((char *)(src));
		src++;
	}
	return ((char *)(NULL));
}
