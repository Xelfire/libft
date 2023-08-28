/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:58:39 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/11 18:01:40 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	c2;

	i = 0;
	c2 = (char)c;
	while ((s[i] && (c2 != s[i])))
		i++;
	if (s[i] == c2)
		return ((char *)s + i);
	return (NULL);
}
