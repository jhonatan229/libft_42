/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:10:36 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/17 22:10:36 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, void *from, size_t numBytes)
{
	size_t			count;
	unsigned char	*pto;
	unsigned char	*pfrom;

	pto = (unsigned char *)to;
	pfrom = (unsigned char *)from;
	count = 0;
	while (count++ < numBytes)
	{
		*pto = *pfrom;
		pfrom++;
		pto++;
	}
	return (to);
}
