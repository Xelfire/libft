/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:40:53 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/11 17:42:58 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	src = (unsigned char *) source;
	dest = (unsigned char *) destination;
	i = 0;
	if ((size == 0) || (source == dest))
		return (destination);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
