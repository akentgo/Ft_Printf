/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:26:53 by akent-go          #+#    #+#             */
/*   Updated: 2023/03/29 12:40:52 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*srcs;

	str = (char *)dst;
	srcs = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*str++ = *srcs++;
	return (str);
}
