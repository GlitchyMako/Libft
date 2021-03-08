/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalmeida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:01:46 by jalmeida          #+#    #+#             */
/*   Updated: 2021/02/23 22:58:36 by jalmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *ned, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (!*ned)
		return ((char *)hays);
	while (hays[a] != '\0' && a < len)
	{
		b = 0;
		while (hays[a + b] != '\0' && hays[a + b] == ned[b] && (a + \
b) < len && ned[b] != '\0')
		{
			if (ned[b + 1] == '\0')
				return ((char *)&(hays[a]));
			b++;
		}
		a++;
	}
	return (0);
}
