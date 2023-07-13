/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:12:20 by akent-go          #+#    #+#             */
/*   Updated: 2023/03/28 13:01:33 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	n_tokens(char *str, char c)
{
	int	res;

	res = 0;
	while (*str)
	{
		if (*str != c)
		{
			res++;
			while (*str && *str != c)
				str++;
		}
		else
			str++;
	}
	return (res);
}

char	**save_char(const char *s, char c)
{
	char	**sol;

	sol = malloc(sizeof(char *) * n_tokens((char *)s, c) + 1);
	if (!sol)
		return (0);
	return (sol);
}

char	**ft_split(const char *s, char c)
{
	int		it;
	char	**ret;
	int		length;

	it = 0;
	ret = save_char(s, c);
	while (*s)
	{
		if (*s != c)
		{
			length = 0;
			while (*s && *s != c)
			{
				++length;
				++s;
			}
			ret[it++] = ft_substr(s - length, 0, length);
		}
		else
			++s;
	}
	ret[it] = 0;
	return (ret);
}
