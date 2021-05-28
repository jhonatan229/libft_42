/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam < jestevam@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:26:29 by jestevam          #+#    #+#             */
/*   Updated: 2021/05/28 00:48:29 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

//copy string src to my string dest, start copy in position 'start' of my dest
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

//creates a new string with malloc, concatenating  s1 and s2 in this new string
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fullstring;

	fullstring = calloc(ft_strlen(s1) + ft_strlen(s2), sizeof(char));
	if (fullstring == NULL)
		return (NULL);
	copyinpos(fullstring, s1, 0);
	copyinpos(fullstring, s2, ft_strlen(s1));
	return (fullstring);
}
