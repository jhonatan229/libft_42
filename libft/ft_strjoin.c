/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:26:29 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/20 17:00:50 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void	copyinpos(char *dest, char const *src, size_t start)
{
	size_t	pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dest[start] = src[pos];
		start++;
		pos++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fullstring;

	fullstring = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (fullstring == NULL)
		return (NULL);
	copyinpos(fullstring, s1, 0);
	copyinpos(fullstring, s2, ft_strlen(s1));
	return (fullstring);
}
