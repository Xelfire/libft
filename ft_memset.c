/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:43:42 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/11 17:46:34 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*b;

	b = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		*b = (unsigned char)c;
		i++;
		b++;
	}
	return (str);
}
