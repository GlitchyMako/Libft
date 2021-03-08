/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalmeida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 17:26:16 by jalmeida          #+#    #+#             */
/*   Updated: 2021/02/23 18:43:06 by jalmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** size_t count = numero de elementos que queremos alocar
** size_t size = tamanho dos elementos
** syntax of malloc		ptr = (casttype*) malloc(num * sizeof(type));
** no malloc nao se consegue aceder ao bloco de memoria
** calloc conseguimos aceder ao bloco de memoria
** pois existe uma inicializaçao do bloco de memoria a 0
*/

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, (count * size));
	return (ptr);
}
