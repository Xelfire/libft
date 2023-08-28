/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:47:39 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/28 14:48:12 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	c2;

	i = ft_strlen(s);
	c2 = (char)c;
	while ((i != 0 && (c2 != s[i])))
		i--;
	if (s[i] == c2)
		return ((char *)s + i);
	return (NULL);
}
