/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:34:20 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/12 14:35:24 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;
	size_t	taille;

	if (!s)
		return (NULL);
	taille = ft_strlen(s);
	if (taille - start <= len)
		len = taille - start;
	if ((size_t)start > taille)
		return (ft_strdup(""));
	rtn = ft_calloc(sizeof(char), (len + 1));
	i = 0;
	if (!rtn)
		return (NULL);
	while (i < len)
	{
		rtn[i] = *(s + start + i);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
