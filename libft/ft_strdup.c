/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:38:30 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/20 17:17:29 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*rslt;

	size = ft_strlen(s);
	rslt = malloc(size);
	if (rslt == NULL)
		return (NULL);
	ft_memcpy(rslt, (unsigned char *)s, size);
	return (rslt);
}
