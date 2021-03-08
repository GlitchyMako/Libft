/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalmeida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 16:02:59 by jalmeida          #+#    #+#             */
/*   Updated: 2021/02/23 20:52:42 by jalmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;

	if (!dst && !src)
		return (0);
	d = dst;
	s = src;
	while (n-- > 0)
		if ((*d++ = *s++) == (char)c)
			return (d);
	return (NULL);
}
