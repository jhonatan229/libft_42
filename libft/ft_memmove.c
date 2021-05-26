/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:10:44 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/17 22:10:44 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	char	*pto;
	char	*pfrom;
	char	*aux;
	size_t	count;

	aux = ft_calloc(numBytes, sizeof(char));
	count = 0;
	pto = (char *)to;
	pfrom = (char *)from;
	while (count < numBytes)
	{
		aux[count] = pfrom[count];
		count++;
	}
	count = 0;
	while (count < numBytes)
	{
		pto[count] = aux[count];
		count++;
	}
	free(aux);
	return (to);
}
