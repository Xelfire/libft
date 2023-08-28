/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:52:24 by tdussoye          #+#    #+#             */
/*   Updated: 2022/11/11 17:58:23 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*freeerror(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	return (NULL);
}

static int	nbstr(const char *s, char c)
{
	long int	i;
	long int	j;

	i = 0;
	j = 0;
	if (s[i] == 0)
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c || s[i] == '\0')
		{
			j++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	if (s[i - 1] != c)
		j++;
	return (j);
}

static int	getnextstr(const char *s, char c, int i)
{
	long int	j;

	j = 0;
	while (s[i] && (s[i] != c))
	{
		i++;
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	long int	i;
	long int	j;
	long int	nextstr;
	char		**s2;

	i = 0;
	j = 0;
	s2 = malloc(sizeof(char *) * ((nbstr(s, c) + 1)));
	if (!s2)
		return (NULL);
	while (j < (nbstr(s, c)))
	{
		while (s[i] == c)
			i++;
		nextstr = getnextstr(s, c, i);
		s2[j] = ft_substr(s, i, nextstr);
		if (!s2[j])
			return (freeerror(s2, j));
		i += nextstr;
		j++;
	}
	s2[j] = NULL;
	return (s2);
}
