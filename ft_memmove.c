/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalmeida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:08:29 by jalmeida          #+#    #+#             */
/*   Updated: 2021/02/23 20:55:50 by jalmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void *ret;

	if (!dst && !src)
		return (0);
	ret = dst;
	if (src < dst)
	{
		src += n;
		dst += n;
		while (n--)
			*(char*)--dst = *(char*)--src;
	}
	else
		while (n--)
			*(char*)dst++ = *(char*)src++;
	return (ret);
}
