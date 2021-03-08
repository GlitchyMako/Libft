/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalmeida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:46:54 by jalmeida          #+#    #+#             */
/*   Updated: 2021/02/23 23:03:02 by jalmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contains_c(char const *set, char const c)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen((char *)s1);
	while (ft_contains_c(set, s1[start]))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (ft_contains_c(set, s1[end - 1]))
		end--;
	trim = ft_substr(s1, start, end - start);
	return (trim);
}
