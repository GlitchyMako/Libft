/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalmeida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:17:52 by jalmeida          #+#    #+#             */
/*   Updated: 2021/02/23 20:54:46 by jalmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*k1;
	unsigned char	*k2;

	if (!n)
		return (0);
	k1 = (unsigned char *)s1;
	k2 = (unsigned char *)s2;
	a = 0;
	while (a < n)
	{
		if (*(k1) != *(k2))
			return (*k1 - *k2);
		k1++;
		k2++;
		a++;
	}
	return (0);
}
