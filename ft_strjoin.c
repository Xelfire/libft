/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:04:32 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/12 14:10:30 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*dest;
	size_t		i;
	size_t		lens1;
	size_t		lens2;
	size_t		j;

	j = -1;
	i = -1;
	if (s1 == (NULL) || s2 == (NULL))
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	dest = (char *)ft_calloc(lens1 + lens2 + 1, sizeof(char));
	if (!dest)
		return (NULL);
	while (++i < lens1)
		dest[i] = s1[i];
	while (++j < lens2)
		dest[i + j] = s2[j];
	dest[i + j] = '\0';
	return (dest);
}
